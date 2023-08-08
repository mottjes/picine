/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_logic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:16:13 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:24:27 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

unsigned int	convert_string(char *str);
int				get_number(int argc, char **argv, unsigned int *number);
void			init_output_buffer(char *output);
int				parse_dict(unsigned int num, t_entry *entries, char *output);

void	main_logic(int argc, char **argv, t_entry *entries)
{
	char			*output;
	unsigned int	number;

	output = (char *)malloc(sizeof(char) * 1024);
	if (output == NULL)
		return ;
	init_output_buffer(output);
	if (get_number(argc, argv, &number))
	{
		ft_putstr("Error\n");
		free(output);
		return ;
	}
	if (!parse_dict(number, entries, output))
	{
		ft_putstr(output);
		ft_putstr("\n");
	}
	else
		ft_putstr("Dict Error\n");
	free(output);
}

unsigned int	convert_string(char *str)
{
	unsigned int	num;

	num = 0;
	while (*str)
		num = num * 10 + (*str++ - '0');
	return (num);
}

int	parse_dict(unsigned int num, t_entry *entries, char *output)
{
	int	scale;

	if (num == 0)
	{
		if (search(num, 1, entries, output))
			return (1);
		else
			return (0);
	}
	scale = 1000000000;
	while (scale != 0)
	{
		if (num / scale)
		{
			if (search(num, scale, entries, output))
				return (1);
		}
		else if (num == 0 && scale == 1)
			if (search(num, scale, entries, output))
				return (1);
		num %= scale;
		scale /= 1000;
	}
	return (0);
}

void	init_output_buffer(char *output)
{
	int	i;

	i = 0;
	while (i < 1024)
		output[i++] = 0;
}

int	get_number(int argc, char **argv, unsigned int *number)
{
	char	input[1024];
	int		len;

	if (argc == 1)
	{
		ft_putstr("Please type in the number you would like to have printed:\n");
		len = read(0, input, 1024);
		if (len == -1)
			return (1);
		input[len - 1] = 0;
		if (check_string(input))
			return (1);
		*number = convert_string(input);
	}
	else
		*number = convert_string(argv[argc - 1]);
	return (0);
}

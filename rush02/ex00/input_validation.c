/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:18:57 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:12:11 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	check_string(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		if (!(str[len] >= '0' && str[len] <= '9'))
			return (1);
	if (len > 10)
		return (1);
	if (len == 9 && ft_strcmp(str, "4294967295") > 0)
		return (1);
	return (0);
}

int	validate_input(int argc, char **argv)
{
	int		fd;

	if (argc > 3)
		return (1);
	if (argc == 3)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		else
			close(fd);
	}
	if (argc > 1)
		if (check_string(argv[argc - 1]))
			return (1);
	return (0);
}

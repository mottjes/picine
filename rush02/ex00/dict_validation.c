/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_validation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 19:56:38 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:25:42 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	validate_format(char *line);
int	is_num(char c);
int	is_printable(char c);
int	format_checks(int *sep, int *key, int *str, char c);

int	count_lines(char buffer[])
{
	char	line[1024];
	char	*buff;
	int		count;

	count = 0;
	buff = buffer;
	while (*buff)
	{
		ft_getline(&buff, line);
		if (empty_line(line))
			continue ;
		if (validate_format(line))
		{
			ft_putstr("Dict Error\n");
			return (0);
		}
		count++;
	}
	return (count);
}

int	validate_format(char *line)
{
	int	sep;
	int	key;
	int	str;

	sep = 0;
	key = 0;
	str = 0;
	while (*line)
	{
		if (format_checks(&sep, &key, &str, *line))
			return (1);
		line++;
	}
	if (!key || !sep || !str)
		return (1);
	return (0);
}

int	format_checks(int *sep, int *key, int *str, char c)
{
	if (!(*key) && !is_num(c))
		return (1);
	else if (!(*key) && is_num(c))
		*key = 1;
	else if (*key == 1 && c == ' ')
		*key = 2;
	else if (*key == 2 && is_num(c) && !(*sep))
		return (1);
	else if (!(*sep) && c == ':')
		*sep = 1;
	else if (!(*sep) && !is_num(c) && c != ' ')
		return (1);
	else if (!is_printable(c))
		return (1);
	else if (*sep && *key && !(*str) && is_printable(c) && c != ' ')
		*str = 1;
	return (0);
}

int	is_num(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

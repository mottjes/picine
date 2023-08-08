/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:43:01 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:01:38 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

void			init_entries(t_entry **entries, int dict_size);
int				parse_entry(char line[], t_entry *entry);
unsigned int	get_key(char **ptr);
void			trim_value(char **ptr);

int	fill_entries(char buffer[], t_entry **entries, int dict_size)
{
	char	line[1024];
	char	*buff;
	int		i;

	init_entries(entries, dict_size);
	i = 0;
	buff = buffer;
	while (*buff)
	{
		ft_getline(&buff, line);
		if (empty_line(line))
			continue ;
		if (parse_entry(line, (*entries) + i))
			return (1);
		i++;
	}
	return (0);
}

int	parse_entry(char line[], t_entry *entry)
{
	char	*value;
	char	*ptr;

	ptr = line;
	entry->key = get_key(&ptr);
	trim_value(&ptr);
	value = (char *)malloc(sizeof(char) * (ft_strlen(ptr) + 1));
	if (value == NULL)
		return (1);
	ft_strcpy(value, ptr);
	entry->value = value;
	return (0);
}

unsigned int	get_key(char **ptr)
{
	unsigned int	key;

	key = 0;
	while (is_num(**ptr))
	{
		key = key * 10 + (**ptr - '0');
		(*ptr)++;
	}
	while (**ptr == ' ')
		(*ptr)++;
	if (**ptr == ':')
		(*ptr)++;
	return (key);
}

void	trim_value(char **ptr)
{
	char	*end;

	end = *ptr;
	while (*end)
		end++;
	while (*(end - 1) == ' ')
		end--;
	*end = 0;
	while (**ptr == ' ')
		(*ptr)++;
}

void	init_entries(t_entry **entries, int dict_size)
{
	int	i;

	i = -1;
	while (++i < dict_size + 1)
	{
		((*entries) + i)->value = NULL;
		((*entries) + i)->key = 42;
	}
}

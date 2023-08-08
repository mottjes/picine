/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:09:13 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:21:43 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

void	clean_entries(t_entry *entries)
{
	int	i;

	if (entries == NULL)
		return ;
	i = -1;
	while (entries[++i].value != NULL)
		free(entries[i].value);
	free(entries);
}

void	init_buffer(char buffer[])
{
	int	i;

	i = 0;
	while (i < 65536)
		buffer[i++] = 0;
}

int	size_and_fill(char *filename, t_entry **entries)
{
	int		size;
	int		fd;
	char	buffer[65536];

	size = 0;
	init_buffer(buffer);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	if (read(fd, buffer, 65535) != -1)
		size = count_lines(buffer);
	if (!size)
		return (0);
	else
		*entries = (t_entry *)malloc(sizeof(t_entry) * (size + 1));
	close(fd);
	if (*entries == NULL)
		return (0);
	if (fill_entries(buffer, entries, size))
		return (0);
	return (size);
}

int	dict_init(int argc, char **argv, t_entry **entries)
{
	int		dict_size;

	if (argc == 3)
		dict_size = size_and_fill(argv[1], entries);
	else
		dict_size = size_and_fill("numbers.dict", entries);
	if (!dict_size)
		return (1);
	return (0);
}

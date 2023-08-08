/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:19:51 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 14:22:57 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	while (1)
	{
		c1 = (unsigned char) *s1++;
		c2 = (unsigned char) *s2++;
		if (c1 != c2 || !c1)
			break ;
	}
	return (c1 - c2);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_getline(char **buff, char *line)
{
	while (**buff != '\0' && **buff != '\n')
	{
		*line = **buff;
		line++;
		(*buff)++;
	}
	*line = '\0';
	if (**buff == '\n')
		(*buff)++;
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_length;
	unsigned int	i;

	if (dest != NULL && src != NULL)
	{
		dest_length = ft_strlen(dest);
		i = 0;
		while (src[i] != '\0')
		{
			dest[dest_length + i] = src[i];
			i++;
		}
		dest[dest_length + i] = '\0';
	}
	return (dest);
}

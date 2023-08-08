/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   more_string.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:20:14 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:03:22 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = -1;
	while (src[++i])
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}

int	empty_line(char *line)
{
	while (*line)
		if (*line++ != ' ')
			return (0);
	return (1);
}

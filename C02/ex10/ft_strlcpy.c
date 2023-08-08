/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 11:01:21 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/15 11:21:10 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	len;

	len = 0;
	while (src[len] != '\0' && size - 1 != '\0')
	{
		dest[len] = src[len];
		len++;
		size--;
	}
	dest[len] = '\0';
	while (src[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*int main(void)
{
	unsigned int size = 5;
	char src[] = "Hello World";
	char dest[size];
	int i = 0;
	while (i < 5)
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
	ft_strlcpy(dest, src, size);
	i = 0;
	while (i < 5)
	{
		write(1, &dest[i], 1);
		i++;
	}
	write(1, "\n", 1);
}*/

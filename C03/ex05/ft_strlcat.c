/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:23:42 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 18:16:29 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}	
	dest[i + j] = '\0';
	k = 0;
	while (src[k])
	{
		k++;
	}
	if (size == 0)
		return (k);
	return (i + k);
}

/*int main(void)
{
	char dest[50] = "This is a ";
	char src[] = "test";
	unsigned int size = 0;

	printf("\n ft_strlcat ----> %u\n", ft_strlcat(dest, src, size));

	char dest2[50] = "This is a ";
	char src2[] = "test";
	printf("\n strlcat -------> %lu\n\n", strlcat(dest2, src2, size));
}*/

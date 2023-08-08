/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:03:31 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 16:40:30 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && nb > 0)
	{
		dest[i + j] = src[j];
		j++;
		nb--;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "Test";
	char dest[40] = "only a ";
	unsigned int n;
	
	n = 3;

	printf("\nft_strncat ---> %s\n", ft_strncat(dest, src, n));

	char src2[] = "Test";
	char dest2[40] = "only a ";
	
	printf("\nstrncat ------> %s\n\n", strncat(dest2, src2, n));
}*/

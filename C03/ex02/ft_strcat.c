/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:39:04 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 18:27:00 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "Test";
	char dest[40] = "only a ";

	printf("\nft_strcat ---> %s\n", ft_strcat(dest, src));

	char src2[] = "Test";
	char dest2[40] = "only a ";
	
	printf("\nstrcat ------> %s\n\n", strcat(dest2, src2));
}*/

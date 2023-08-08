/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:46:32 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/14 14:03:31 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
	{
		*(dest + i) = *src;
		i++;
		src++;
	}	
	*(dest + i) = '\0';
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello";
	char dest[10] = {};
	
	write(1, &src[0], 1);
	write(1, &src[1], 1);
	write(1, &src[2], 1);
	write(1, &src[3], 1);
	write(1, &src[4], 1);
	write(1, &src[5], 1);
	write(1, "\n", 1);
	write(1, &dest[0], 1);
	write(1, &dest[1], 1);
	write(1, &dest[2], 1);
	write(1, &dest[3], 1);
	write(1, &dest[4], 1);
	write(1, &dest[5], 1);
	write(1, "\n", 1);

	ft_strcpy(dest, src);

	write(1, &src[0], 1);
	write(1, &src[1], 1);
	write(1, &src[2], 1);
	write(1, &src[3], 1);
	write(1, &src[4], 1);
	write(1, "\n", 1);
	write(1, &dest[0], 1);
	write(1, &dest[1], 1);
	write(1, &dest[2], 1);
	write(1, &dest[3], 1);
	write(1, &dest[4], 1);
	write(1, "\n", 1);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:05:25 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/14 14:21:27 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
		dest[i] = src [i];
		i++;
		n--;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

/*int main(void)
{
	char src[] = "Hello";
	char dest[12] = "testtesttest";
	
	int n;
	
	n = 0;
	while (n < 6)
	{
		write(1, &src[n], 1);
		n++;
	}
	write(1, "\n", 1);
	n = 0;
	while (n < 12)
	{
		write(1, &dest[n], 1);
		n++;
	}
	write(1, "\n", 1);
	
	ft_strncpy(dest, src, 6);

	n = 0;
	while (n < 6)
	{
		write(1, &src[n], 1);
		n++;
	}
	write(1, "\n", 1);
	n = 0;
	while (n < 12)
	{
		write(1, &dest[n], 1);
		n++;
	}
	write(1, "\n", 1);
}*/

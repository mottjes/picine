/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:51:35 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 18:22:24 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
	{
		return (0);
	}
	while (*s1 == *s2 && *s1 != '\0' && n != 1)
	{
		++s1;
		++s2;
		n--;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char *s1;
	char *s2;
	unsigned int n;

	n = 3;
	s1 = "Test";
	s2 = "Test";
	printf("\nft_strncmp ---->  %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp ------->  %d\n\n", strncmp(s1, s2, n));

	s1 = "Test";
	s2 = "Tes";
	printf("ft_strncmp ---->  %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp ------->  %d\n\n", strncmp(s1, s2, n));
	
	s1 = "Te";
	s2 = "Test";
	printf("ft_stnrcmp ---->  %d\n", ft_strncmp(s1, s2, n));
	printf("strncmp ------->  %d\n\n", strncmp(s1, s2, n));
}*/
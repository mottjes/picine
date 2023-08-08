/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:23:44 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 16:36:54 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

/*int	main(void)
{
	char *s1;
	char *s2;

	s1 = "Test";
	s2 = "Test";
	printf("\nft_strcmp ---->  %d\n", ft_strcmp(s1, s2));
	printf("strcmp ------->  %d\n\n", strcmp(s1, s2));
	
	s1 = "Test";
	s2 = "Tes";
	printf("ft_strcmp ---->  %d\n", ft_strcmp(s1, s2));
	printf("strcmp ------->  %d\n\n", strcmp(s1, s2));
	
	s1 = "Tes";
	s2 = "Test";
	printf("ft_strcmp ---->  %d\n", ft_strcmp(s1, s2));
	printf("strcmp ------->  %d\n\n", strcmp(s1, s2));
}*/

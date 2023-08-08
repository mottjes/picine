/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:06:53 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 16:46:07 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j +1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str[] = "This is a test";
	char to_find[] = "test";

	printf("\nft_strstr ---> %s\n", ft_strstr(str, to_find));
	printf("\nstrstr ------> %s\n\n", strstr(str, to_find));

	char str2[] = "This is a test";
	char to_find2[] = "";

	printf("\nft_strstr ---> %s\n", ft_strstr(str2, to_find2));
	printf("\nstrstr ------> %s\n\n", strstr(str2, to_find2));
	
	char str3[] = "This is a test";
	char to_find3[] = "Hello";

	printf("\nft_strstr ---> %s\n", ft_strstr(str3, to_find3));
	printf("\nstrstr ------> %s\n\n", strstr(str3, to_find3));
}*/

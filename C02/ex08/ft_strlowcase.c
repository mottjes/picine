/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft-strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:57:29 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/14 14:34:20 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str[] = "TeST";

	write(1, &str[0], 1);
	write(1, &str[1], 1);
	write(1, &str[2], 1);
	write(1, &str[3], 1);
	write(1, "\n", 1);
	ft_strlowcase(str);
	write(1, &str[0], 1);
	write(1, &str[1], 1);
	write(1, &str[2], 1);
	write(1, &str[3], 1);
}*/

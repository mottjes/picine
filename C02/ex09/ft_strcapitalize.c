/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:59:18 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/14 11:30:21 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	mkstrlowercase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if ((str[j] >= 'A' && str[j] <= 'Z'))
		{
			str[j] = str[j] + 32;
		}
		j++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	mkstrlowercase(str);
	if (str[0] >= 'a' && str[i] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (str[i - 1] <= 47 || (str[i - 1] >= 58 && str[i -1] <= 64))
			{
				str[i] = str[i] - 32;
			}
			if ((str[i - 1] >= 91 && str[i -1] <= 96) || str[i - 1] >= 123)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, coment tu vas ? 42mots quarante-deux; cinquante+et+un";
	int	i;

	i = 0;
	ft_strcapitalize(str);
	while (i < 60)
	{
		write(1, &str[i], 1);
		i++;
	}
}*/

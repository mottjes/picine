/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 10:52:19 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/21 11:59:14 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	sort(int argc, char *argv[])
{
	char	*str1;
	char	*str2;
	int		i;
	int		j;

	i = 1;
	j = 1;
	while (j < argc - 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			str1 = argv[i];
			str2 = argv[i + 1];
			if (ft_strcmp(str1, str2) > 0)
			{
				argv[i] = str2;
				argv[i + 1] = str1;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	i = 0;
	sort(argc, argv);
	while (j < argc)
	{
		while (argv[j][i] != '\0')
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j++;
	}
}

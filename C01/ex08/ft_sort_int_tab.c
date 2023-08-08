/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 13:12:05 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/09 11:04:25 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}

/*int	main(void)
{
	int tab[] = {'5', '2', '6', '3', '9'};

	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
	write(1, &tab[3], 1);
	write(1, &tab[4], 1);
	write(1, "\n", 1);
	ft_sort_int_tab(tab, 5);
	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
	write(1, &tab[3], 1);
	write(1, &tab[4], 1);
}*/
/*
cc ft_sort_int_tab.c -Wall -Wextra -Werror
*/

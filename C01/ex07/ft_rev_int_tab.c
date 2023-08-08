/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 16:02:24 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/09 10:52:16 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i -1] = tmp;
		i++;
	}
}

/*int	main(void)
{
	int tab[] = {'5', '6', '2', '3', '8'};

	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
	write(1, &tab[3], 1);
	write(1, &tab[4], 1);
	write(1, "\n", 1);
	ft_rev_int_tab(tab , 5);
	write(1, &tab[0], 1);
	write(1, &tab[1], 1);
	write(1, &tab[2], 1);
	write(1, &tab[3], 1);
	write(1, &tab[4], 1);
}*/
/*
cc ft_rev_int_tab.c -Wall -Wextra -Werror
*/
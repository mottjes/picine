/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:12:52 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/08 12:24:48 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	*a;
	int	*b;
	int	c;
	int	d;

	c = 50;
	d = 54;
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, "\n", 1);
	a = &c;
	b = &d;
	ft_swap(a, b);
	write(1, &c, 1);
	write(1, &d, 1);
}*/

/*
cc -Wall -Werror -Wextra ft_swap.c
*/

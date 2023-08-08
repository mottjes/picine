/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 10:51:19 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/06 19:07:20 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a < '9' || b < '8' || c < '9' || d < '9')
	{
		write(1, ", ", 2);
	}
}

void	loop(int a, int b, int c, int d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = '0';
				while (d <= '9')
				{
					if ((b < d && a <= c) || c > a)
					{
						print(a, b, c, d);
					}
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	loop(a, b, c, d);
}

/*int	main(void)
{
	ft_print_comb2();
}*/

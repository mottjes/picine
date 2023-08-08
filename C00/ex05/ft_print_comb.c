/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 14:48:17 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/06 19:06:33 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a < 55)
	{
		write(1, ", ", 2);
	}
}

void	loop(int a, int b, int c)
{
	a = 48;
	while (a < 58)
	{
		b = 48;
		while (b < 58)
		{
			c = 48;
			while (c < 58)
			{
				if (a < b && b < c)
				{
					print(a, b, c);
				}
				c++;
			}
			b++;
		}	
		a++;
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	loop(a, b, c);
}

/*int	main(void)
{
	ft_print_comb();
}*/

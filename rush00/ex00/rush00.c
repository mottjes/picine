/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Virgis <vruibys@student.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 12:25:27 by Virgis            #+#    #+#             */
/*   Updated: 2023/03/05 13:22:01 by Virgis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(char start, char middle, char end, int width)
{
	ft_putchar(start);
	while (width > 2)
	{
		ft_putchar(middle);
		width--;
	}
	if (width > 1)
	{
		ft_putchar(end);
	}
}

void	rush(int x, int y)
{
	int	counter_y;

	counter_y = 0;
	if (x > 0 && y > 0)
	{
		while (counter_y < y)
		{
			if (counter_y == 0)
			{
				print_line('o', '-', 'o', x);
			}
			else if (counter_y == y -1)
			{
				print_line('o', '-', 'o', x);
			}
			else
			{
				print_line('|', ' ', '|', x);
			}
			counter_y++;
			write(1, "\n", 1);
		}
	}
}

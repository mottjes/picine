/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 16:33:11 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/21 15:22:50 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printnbr(int nbr, int basevalue, char *base)
{
	long	longnbr;

	longnbr = nbr;
	if (longnbr < 0)
	{
		write(1, "-", 1);
		longnbr = -longnbr;
	}
	if (longnbr >= basevalue)
	{
		printnbr(longnbr / basevalue, basevalue, base);
	}
	ft_putchar(base[longnbr % basevalue]);
}

int	doublechar(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i])
	{
		while (base[j])
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	basevalue;

	basevalue = 0;
	while (base[basevalue])
	{
		if (base[basevalue] == '+' || base[basevalue] == '-')
		{
			return ;
		}
		basevalue++;
	}
	if (basevalue < 2)
	{
		return ;
	}
	if (doublechar(base))
	{
		return ;
	}
	printnbr(nbr, basevalue, base);
}

/*int main(void)
{
	int nbr = -2147483648;
	char base[] = "0123456789";
	ft_putnbr_base(nbr, base);
	write(1,"\n", 1);

	int nbr1 = 2147483647;
	char base1[] = "0123456789";
	ft_putnbr_base(nbr1, base1);
	write(1,"\n", 1);

	int nbr2 = 42;
	char base2[] = "0123456789";
	ft_putnbr_base(nbr2, base2);
	write(1,"\n", 1);

	int nbr3 = -42;
	char base3[] = "0123456789";
	ft_putnbr_base(nbr3, base3);
	write(1,"\n", 1);

	int nbr4 = 0;
	char base4[] = "0123456789";
	ft_putnbr_base(nbr4, base4);
	write(1,"\n", 1);
}*/

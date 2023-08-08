/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 18:12:56 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/22 18:44:11 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}
	if (power < 0)
	{
		return (0);
	}
	while (power > 1)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int	main(void)
{
	int nb;
	int power;

	nb = -3;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}*/

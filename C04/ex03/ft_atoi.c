/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:03:26 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/21 12:06:21 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count_minus;
	int	number;

	count_minus = 0;
	i = 0;
	number = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+' )
	{	
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += str[i] - 48;
		i++;
	}
	if (count_minus % 2 == 0)
		return (number);
	return (-number);
}

/*int main(void)
{
	char str[] = "    --++-+--1243cd234";
	ft_atoi(str);
	printf("%d\n", ft_atoi(str));
}*/

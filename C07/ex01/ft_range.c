/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:25:39 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/22 13:07:59 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return (-1);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}

/*int	main(void)
{
	int	i;
	int	*array;
	int	min;
	int max;

	i = 0;
	min = - 3;
	max = 7;
	array = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", array[i]);
		i++;
	}
}*/

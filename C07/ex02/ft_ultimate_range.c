/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:00:24 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/22 17:04:59 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}	
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	*range = array;
	i = 0;
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (i);
}

/*int main(void)
{
	int i;
	int *array;
	int min;
	int max;

	min = 0;
	max = 5;
	printf("size:%d\n", ft_ultimate_range(&array, min, max));
	if (array != NULL)
	{
		i = 0;
		while (i < (max - min))
		{
			printf("%d\n", array[i]);
			i++;
		}
	}
}*/

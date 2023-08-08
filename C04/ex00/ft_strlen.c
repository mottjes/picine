/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:28:04 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/13 15:28:09 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != 0)
	{
		size++;
		str++;
	}
	return (size);
}

/*int	main(void)
{
	char	*a;

	a = "test";
	ft_strlen(a);
}*/
/*
cc ft_strlen.c -Wall -Wextra -Werror
*/

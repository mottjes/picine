/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:12:35 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/08 17:48:00 by mottjes          ###   ########.fr       */
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

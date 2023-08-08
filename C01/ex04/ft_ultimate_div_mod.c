/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 13:20:14 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/08 12:41:41 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp1;
	int	tmp2;

	tmp1 = *a / *b;
	tmp2 = *a % *b;
	*a = tmp1;
	*b = tmp2;
}

/*int	main(void)
{
	ft_ultimate_div_mod(a, b);
}*/
/*
cc ft_ultimate_div_mod.c -Wall -Wextra -Werror
*/

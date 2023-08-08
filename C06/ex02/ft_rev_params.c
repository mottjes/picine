/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:40:25 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/16 17:48:32 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc--;
	while (argc > 0)
	{
		while (argv[argc][i] != '\0')
		{
			write(1, &argv[argc][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		argc--;
	}
}

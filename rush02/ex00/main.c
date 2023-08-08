/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 09:31:20 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:21:58 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	main(int argc, char **argv)
{
	t_entry	*entries;

	if (validate_input(argc, argv))
	{
		ft_putstr("Error\n");
		return (0);
	}
	entries = NULL;
	if (!dict_init(argc, argv, &entries))
		main_logic(argc, argv, entries);
	clean_entries(entries);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scales.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 18:32:06 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 18:57:14 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	scales_hundreds(unsigned int div, t_entry *entries, char *output)
{
	if (search_dict(div / 100, entries, output))
		return (1);
	ft_strcat(output, "-");
	if (search_dict(100, entries, output))
		return (1);
	if (div % 100)
		ft_strcat(output, " ");
	return (0);
}

int	scales_tens(unsigned int div, t_entry *entries, char *output)
{
	if (search_dict((div % 100 - div % 10), entries, output))
		return (1);
	if (div % 10)
		if (scales_digits(div, entries, output))
			return (1);
	return (0);
}

int	scales_digits(unsigned int div, t_entry *entries, char *output)
{
	ft_strcat(output, "-");
	if (search_dict(div % 10, entries, output))
		return (1);
	return (0);
}

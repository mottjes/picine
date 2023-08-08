/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   word_search.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:38:27 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:23:54 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"rush02.h"

int	split_div(unsigned int div, t_entry *entries, char *output);
int	search_dict(unsigned int div, t_entry *entries, char *output);
int	find_div(unsigned int div, int scale, t_entry *entries, char *output);

int	search(unsigned int num, int scale, t_entry *entries, char *output)
{
	unsigned int	div;

	div = num / scale;
	if (find_div(div, scale, entries, output))
		return (1);
	if (scale > 1)
	{
		ft_strcat(output, " ");
		if (search_dict(scale, entries, output))
			return (1);
		if (num - div * scale)
		{
			if ((num - div * scale) / 100)
				ft_strcat(output, ",");
			ft_strcat(output, " ");
		}
	}
	return (0);
}

int	find_div(unsigned int div, int scale, t_entry *entries, char *output)
{
	if (div / 100)
		if (scales_hundreds(div, entries, output))
			return (1);
	if (*output && ((div / 100 && div % 100) || (div % 100 && scale == 1)))
		ft_strcat(output, "and ");
	if ((div % 100) > 20)
	{
		if (scales_tens(div, entries, output))
			return (1);
	}
	else if (div % 100)
	{
		if (search_dict(div % 100, entries, output))
			return (1);
	}
	else if (!div && scale == 1 && !(*output))
		if (search_dict(div, entries, output))
			return (1);
	return (0);
}

int	search_dict(unsigned int key, t_entry *entries, char *output)
{
	int	i;

	i = 0;
	while (entries[i].value != NULL)
	{
		if (entries[i].key == key)
		{
			ft_strcat(output, entries[i].value);
			return (0);
		}
		i++;
	}
	return (1);
}

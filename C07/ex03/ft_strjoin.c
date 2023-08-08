/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mottjes <mottjes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:05:29 by mottjes           #+#    #+#             */
/*   Updated: 2023/03/23 12:47:49 by mottjes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	return (dest);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

int	return_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	len -= ft_strlen(sep);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	len = return_len(size, strs, sep);
	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i + 1 < size)
			ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

/*int main(void)
{
	char	*strs[4];
	char 	*sep;

	strs[0] = "Hello";
	strs[1] = "World";
	strs[2] = "Test1";
	strs[3] = "test2";
	sep = ":";
	printf("%s\n", ft_strjoin(4, strs, sep));
	return (0);
}*/

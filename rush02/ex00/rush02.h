/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolosov <ekolosov@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 09:33:00 by ekolosov          #+#    #+#             */
/*   Updated: 2023/03/19 21:29:09 by ekolosov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct t_entry
{
	unsigned int	key;
	char			*value;
}	t_entry;

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_getline(char **buff, char *line);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcpy(char *dest, char *src);
int		is_num(char c);
int		is_printable(char c);
int		search(unsigned int num, int scale, t_entry *entries, char *output);
int		count_lines(char buffer[]);
int		validate_input(int argc, char **argv);
int		check_string(char *str);
int		empty_line(char *line);
int		dict_init(int argc, char **argv, t_entry **entries);
int		fill_entries(char buffer[], t_entry **entries, int dict_size);
void	main_logic(int argc, char **argv, t_entry *entries);
int		search_dict(unsigned int div, t_entry *entries, char *output);
int		scales_hundreds(unsigned int div, t_entry *entries, char *output);
int		scales_tens(unsigned int div, t_entry *entries, char *output);
int		scales_digits(unsigned int div, t_entry *entries, char *output);
void	init_buffer(char buffer[]);
void	clean_entries(t_entry *entries);

#endif	//	RUSH02_H
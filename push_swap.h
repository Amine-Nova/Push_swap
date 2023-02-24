/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:24:05 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:56:01 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include "ft_printf/ft_printf.h"

typedef struct t_data
{
	int		*str;
	int		*empty;
	int		i;
	int		l;
	int		j;
}	t_data;

int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strjoin(char *str1, char *str2);
void	*my_calloc(size_t count, size_t size);
size_t	ft_strlen(char *s);
int		ft_strcmp(char *s1, char *s2);
char	*ft_itoa(int nb);
char	**check_num(char **s);
int		num_count(char **av);
int		cmp_num(int *s, int l);
int		check_error(char *str);
int		*store_num(char **av);
int		check_space(char *str);
int		space_handle(char **av);
int		store_str(char **av);
void	sa(t_data *data, int i);
void	sb(t_data *data, int i);
void	ss(t_data *data, int i);
void	ra(t_data *data, int i);
void	rb(t_data *data, int i);
void	rr(t_data *data, int i);
void	rra(t_data *data, int i);
void	rrb(t_data *data, int i);
void	pa(t_data *data);
void	pb(t_data *data);
void	rrr(t_data *data, int i);
void	sort_2num(t_data *data);
void	sort_3num(t_data *data);
// void	sort_4num(t_data *data);
#endif
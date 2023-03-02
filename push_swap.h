/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:24:05 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/01 20:14:56 by abenmous         ###   ########.fr       */
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

typedef struct s_list
{
	int a;
	struct s_list *next;
}t_list;

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
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*store_list(int *s, char **av);
#endif
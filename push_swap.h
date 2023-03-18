/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:24:05 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/18 14:47:29 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
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
	int				a;
	int				i;
	int				p;
	struct s_list	*next;
}	t_list;

long long int		ft_atoi(const char *str);
char				**ft_split(char const *s, char c);
char				*ft_strjoin(char *str1, char *str2);
void				*my_calloc(size_t count, size_t size);
size_t				ft_strlen(char *s);
int					ft_strcmp(char *s1, char *s2);
char				*ft_itoa(int nb);
char				**check_num(char **s);
int					num_count(char **av);
int					cmp_num(int *s, int l);
int					check_error(char *str);
int					*store_num(char **av);
int					check_space(char *str);
int					space_handle(char **av, int *s);
int					store_str(char **av, int *s);
t_list				*ft_lstnew(int content);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*store_list(int *s, char **av);
void				stack_s(t_list **stack, int i);
void				stack_r(t_list **stack, int i);
void				stack_p(t_list **stack1, t_list **stack2, int i);
void				stack_rr(t_list **stack, int i);
void				sort_2num(t_list **stack, int i);
void				sort_3num(t_list **stack, int i);
void				sort_4num(t_list **stack, t_list **stack1);
void				sort_4num1(t_list **stack, t_list **stack2, int j);
void				sort_4num2(t_list **stack, t_list **stack2, int j);
void				sort_5num(t_list **stack, t_list **stack2);
void				sort_5num1(t_list **stack, t_list **stack2, int j);
void				sort_5num2(t_list **stack, t_list **stack2, int j);
int					check_mm(char **av, int *s);
void				number_sort(t_list **stacka,
						t_list **stackb, int l, int *s);
int					*sorted_array(int *s, int l);
void				sort_number(t_list *stack, int *s, int l);
void				error_set(char **av, int l, int *s);
void				range_set(t_list **stacka, t_list **stackb, int l);
void				position_set(t_list *stackb);
void				stack_set(t_list **stacka, t_list **stackb, int l);
int					number_find(t_list *stackb);
int					ft_lst_size(t_list *a);
int					find_max(t_list **stack);
int					if_sorted(t_list *stack);
void				free_exit(t_list *stacka, int *s);

#endif
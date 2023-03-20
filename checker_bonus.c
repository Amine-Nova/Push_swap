/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:14:38 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/20 11:35:56 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include<stdio.h>

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*str;
	int		*s;
	int		l;

	if (ac < 2)
		return (0);
	l = num_count(av);
	s = store_num(av);
	error_set(av, l, s);
	stacka = store_list(s, av);
	stackb = NULL;
	str = get_next_line(0);
	while (str)
	{
		rules_exe(&stacka, &stackb, str);
		free(str);
		str = get_next_line(0);
	}
	if (if_sorted(stacka) == 1)
		ft_printf("OK\n");
	if (if_sorted(stacka) == 0)
		ft_printf("K0\n");
	free_exit(stacka, s);
}

void	error_set(char **av, int l, int *s)
{
	space_handle(av, s);
	store_str(av, s);
	cmp_num(s, l);
	check_mm(av, s);
}

void	free_exit(t_list *stacka, int *s)
{
	t_list	*freenode;

	while (stacka)
	{
		freenode = stacka;
		stacka = stacka->next;
		free(freenode);
	}
	free (s);
	exit (0);
}

int	if_sorted(t_list *stack)
{
	while (stack->next)
	{
		if (stack->a < stack->next->a)
			stack = stack->next;
		else
			return (0);
	}
	return (1);
}

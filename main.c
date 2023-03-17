/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:18:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/17 19:21:35 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;
	t_list	*freenode;
	int		*s;
	int		l;

	(void)ac;
	l = num_count(av);
	s = store_num(av);
	if (!s)
		return (0);
	error_set(av, l, s);
	stacka = store_list(s, av);
	if (if_sorted(stacka) == 1)
		exit (0);
	stackb = NULL;
	s = sorted_array(s, l);
	number_sort(&stacka, &stackb, l, s);
	while (stackb)
	{
		freenode = stackb;
		stackb = stackb->next;
		free(freenode);
	}
	free(s);
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

void	error_set(char **av, int l, int *s)
{
	space_handle(av);
	store_str(av);
	cmp_num(s, l);
	check_mm(av);
}

int	find_max(t_list **stack)
{
	t_list	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp)
	{
		if (temp->i == ft_lst_size(*stack) - 1)
			return (i);
		i++;
		temp = temp->next;
	}
	return (i);
}

void	number_sort(t_list **stacka, t_list **stackb, int l, int *s)
{
	(void)s;
	if (l == 2)
		sort_2num(stacka, 0);
	if (l == 3)
		sort_3num(stacka, 0);
	if (l == 4)
		sort_4num(stacka, stackb);
	if (l == 5)
		sort_5num(stacka, stackb);
	if (l > 5)
	{
		sort_number(*stacka, s, l);
		range_set(stacka, stackb, l);
	}
}

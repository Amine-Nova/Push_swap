/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:18:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/04/01 16:08:36 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stacka;
	t_list	*stackb;
	int		*s;
	int		l;

	if (ac < 2)
		return (0);
	l = num_count(av);
	s = store_num(av);
	if (!s)
		return (0);
	error_set(av, l, s);
	stacka = store_list(s, av);
	stackb = NULL;
	if (if_sorted(stacka) == 1)
		free_exit(stacka, stackb, s);
	s = sorted_array(s, l);
	number_sort(&stacka, &stackb, l, s);
	free_exit(stacka, stackb, s);
}

void	free_exit(t_list *stacka, t_list *stackb, int *s)
{
	t_list	*freenode;

	while (stacka)
	{
		freenode = stacka;
		stacka = stacka->next;
		free(freenode);
	}
	while (stackb)
	{
		freenode = stackb;
		stackb = stackb->next;
		free(freenode);
	}
	free (s);
	exit (0);
}

void	error_set(char **av, int l, int *s)
{
	space_handle(av, s);
	store_str(av, s);
	cmp_num(s, l);
	check_mm(av, s);
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

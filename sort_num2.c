/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_num2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:37 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/19 15:56:26 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_5num(t_list **stack, t_list **stack2)
{
	t_list	*node;
	t_list	*node1;
	t_list	*node2;
	int		j;

	(void)stack2;
	node = (*stack);
	node1 = (*stack)->next;
	node2 = (*stack);
	j = 1;
	while (node1 != NULL)
	{
		if (node1 && node->a < node1->a)
			node1 = node1->next;
		if (node1 && node->a > node1->a)
		{
			node = node1;
			node1 = node1->next;
		}
	}
	while (node2->a != node->a && ++j >= 0)
		node2 = node2->next;
	sort_5num1(stack, stack2, j);
	sort_5num2(stack, stack2, j);
}

void	sort_5num1(t_list **stack, t_list **stack2, int j)
{
	t_list	*node;

	node = (*stack);
	if (node->a < node->next->a && node->next->a < node->next->next->a
		&& node->next->next->a < node->next->next->next->a
		&& node->next->next->next->a < node->next->next->next->next->a)
		return ;
	if (j == 1)
	{
		stack_pb(stack, stack2, 1);
		sort_4num(stack, stack2);
		stack_pa(stack2, stack, 0);
	}
	if (j == 2)
	{
		stack_s(stack, 0);
		stack_pb(stack, stack2, 1);
		sort_4num(stack, stack2);
		stack_pa(stack2, stack, 0);
	}
}

void	sort_5num2(t_list **stack, t_list **stack2, int j)
{
	if (j == 3)
	{
		stack_r(stack, 0);
		stack_r(stack, 0);
		stack_pb(stack, stack2, 1);
		sort_4num(stack, stack2);
		stack_pa(stack2, stack, 0);
	}
	if (j == 4)
	{
		stack_rr(stack, 0);
		stack_rr(stack, 0);
		stack_pb(stack, stack2, 1);
		sort_4num(stack, stack2);
		stack_pa(stack2, stack, 0);
	}
	if (j == 5)
	{
		stack_rr(stack, 0);
		stack_pb(stack, stack2, 1);
		sort_4num(stack, stack2);
		stack_pa(stack2, stack, 0);
	}
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

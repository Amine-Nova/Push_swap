/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:38:23 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/22 14:24:54 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_s(t_list **stack, int i)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	if ((*stack)->next == NULL)
		return ;
	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
	if (i == 0)
		ft_printf("sa\n");
	if (i == 1)
		ft_printf("sb\n");
}

void	stack_pa(t_list **stack1, t_list **stack2, int i)
{
	t_list	*tmp;

	if (!(*stack1))
		return ;
	tmp = (*stack1);
	if (tmp == NULL)
		return ;
	(*stack1) = (*stack1)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack2, tmp);
	if (i == 0)
		ft_printf("pa\n");
}

void	stack_pb(t_list **stack1, t_list **stack2, int i)
{
	t_list	*tmp;

	if (!(*stack1))
		return ;
	tmp = (*stack1);
	if (tmp == NULL)
		return ;
	(*stack1) = (*stack1)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack2, tmp);
	if (i == 1)
		ft_printf("pb\n");
}

void	stack_r(t_list **stack, int i)
{
	t_list	*tmp;

	if (!(*stack))
		return ;
	tmp = (*stack);
	(*stack) = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	if (i == 0)
		ft_printf("ra\n");
	if (i == 1)
		ft_printf("rb\n");
}

void	stack_rr(t_list **stack, int i)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (!(*stack))
		return ;
	tmp = (*stack);
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	tmp1 = tmp->next;
	tmp1->next = NULL;
	tmp->next = NULL;
	ft_lstadd_front(stack, tmp1);
	if (i == 0)
		ft_printf("rra\n");
	if (i == 1)
		ft_printf("rrb\n");
}

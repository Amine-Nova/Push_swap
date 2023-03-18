/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_set.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 15:38:23 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/18 14:48:05 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_s(t_list **stack, int i)
{
	t_list	*tmp;
	t_list	*tmp1;

	if ((*stack)->next == NULL)
		return ;
	tmp = (*stack)->next->next;
	tmp1 = (*stack)->next;
	(*stack)->next->next = (*stack);
	(*stack)->next = tmp;
	(*stack) = tmp1;
	if (i == 0)
		ft_printf("sa\n");
	if (i == 1)
		ft_printf("sb\n");
}

void	stack_p(t_list **stack1, t_list **stack2, int i)
{
	t_list	*tmp;

	tmp = (*stack1);
	if (tmp == NULL)
		return ;
	(*stack1) = (*stack1)->next;
	tmp->next = NULL;
	ft_lstadd_front(stack2, tmp);
	if (i == 0)
		ft_printf("pa\n");
	if (i == 1)
		ft_printf("pb\n");
}

void	stack_r(t_list **stack, int i)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	tmp = (*stack);
	if (tmp->next == NULL)
		return ;
	tmp1 = (*stack)->next;
	tmp2 = (*stack)->next;
	tmp->next = NULL;
	while (tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = tmp;
	(*stack) = tmp2;
	if (i == 0)
		ft_printf("ra\n");
	if (i == 1)
		ft_printf("rb\n");
}

void	stack_rr(t_list **stack, int i)
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;

	if ((*stack)->next == NULL)
		return ;
	tmp = (*stack);
	tmp1 = (*stack);
	tmp2 = (*stack);
	while (tmp1->next->next != NULL)
		tmp1 = tmp1->next;
	while (tmp2->next != NULL)
		tmp2 = tmp2->next;
	tmp1->next = NULL;
	tmp2->next = tmp;
	(*stack) = tmp2;
	if (i == 0)
		ft_printf("rra\n");
	if (i == 1)
		ft_printf("rrb\n");
}

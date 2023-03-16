/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:02:29 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/16 18:08:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof (t_list));
	if (!node)
		return (0);
	node->a = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = (*lst);
	if (!(*lst))
	{
		(*lst) = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((*lst) == NULL)
	{
		(*lst) = new;
		return ;
	}
	new->next = (*lst);
	(*lst) = new;
}

int	ft_lst_size(t_list *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

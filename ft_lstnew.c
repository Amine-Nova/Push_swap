/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 19:02:29 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/01 20:14:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list *ft_lstnew(int content)
{
	t_list *node;
	node = malloc(sizeof (t_list));
	if(!node)
		return (0);
	node->a = content;
	node->next = NULL;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *result;

	result = *lst;
	if (result == NULL)
		{
			*lst = new;
			return ;
		}
	while(result->next != NULL)
		result = result->next;
	result->next = new;
}
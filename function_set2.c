/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_set2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:22:42 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/19 22:32:29 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_data *data, int i)
{
	data->j = 0;
	data->l = data->l - 1;
	data->i = data->str[data->l];
	while (data->l > 0)
	{
		data->str[data->l] = data->str[data->l - 1];
		data->l--;
	}
	data->str[0] = data->i;
	if (i == 1)
		ft_printf("rra\n");
}

void	rrb(t_data *data, int i)
{
	data->j = 0;
	data->l = data->l - 1;
	data->i = data->empty[data->l];
	while (data->l > 0)
	{
		data->empty[data->l] = data->empty[data->l - 1];
		data->l--;
	}
	data->empty[0] = data->i;
	if (i == 1)
		ft_printf("rrb\n");
}

void	rrr(t_data *data, int i)
{
	rra(data, 0);
	rrb(data, 0);
	if (i == 1)
		ft_printf("rrr\n");
}

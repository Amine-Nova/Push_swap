/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_set3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 22:31:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:55:27 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_data *data)
{
	if (!data->empty)
		return ;
	data->i = data->empty[0];
	data->str[0] = data->i;
}

void	pb(t_data *data)
{
	if (!data->str)
		return ;
	data->i = data->str[0];
	data->empty[0] = data->i;
}

void	ra(t_data *data, int i)
{
	data->i = data->str[0];
	data->j = 0;
	while (data->j < data->l - 1)
	{
		data->str[data->j] = data->str[data->j + 1];
		data->j++;
	}
	data->str[data->j] = data->i;
	if (i == 1)
		ft_printf("ra\n");
}

void	rb(t_data *data, int i)
{
	data->i = data->empty[0];
	data->j = 0;
	while (data->j < data->l - 1)
	{
		data->empty[data->j] = data->empty[data->j + 1];
		data->j++;
	}
	data->empty[data->j] = data->i;
	if (i == 1)
		ft_printf("rb\n");
}

void	rr(t_data *data, int i)
{
	ra(data, 0);
	rb(data, 0);
	if (i == 0)
		ft_printf("rr\n");
}

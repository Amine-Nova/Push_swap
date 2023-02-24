/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 18:52:00 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:57:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data, int i)
{
	data->i = 0;
	data->j = 0;
	if (data->l == 1)
		return ;
	data->i = data->str[0];
	data->j = data->str[1];
	data->str[0] = data->j;
	data->str[1] = data->i;
	if (i == 1)
		ft_printf("sa\n");
}

void	sb(t_data *data, int i)
{
	data->i = 0;
	data->j = 0;
	if (data->l == 1)
		return ;
	data->i = data->empty[0];
	data->j = data->empty[1];
	data->empty[0] = data->j;
	data->empty[1] = data->i;
	if (i == 1)
		ft_printf("sb\n");
}

void	ss(t_data *data, int i)
{
	sa(data, 0);
	sb(data, 0);
	if (i == 0)
		ft_printf("ss\n");
}

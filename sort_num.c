/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_num.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 17:05:59 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:54:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_2num(t_data *data)
{
	if (data->str[0] > data->str[1])
		sa(data, 1);
}

void	sort_3num(t_data *data)
{
	if (data->str[0] > data->str[1] && data->str[0] > data->str[2])
		ra(data, 1);
	if (data->str[0] > data->str[1] && data->str[0] < data->str[2])
		sa(data, 1);
	if (data->str[2] < data->str[1] && data->str[0] < data->str[1]
		&& data->str[0] < data->str[2])
	{
		sa(data, 1);
		ra(data, 1);
	}
	if (data->str[2] < data->str[1] && data->str[0] < data->str[1]
		&& data->str[0] > data->str[2])
		rra(data, 1);
}

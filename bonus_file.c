/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:38:17 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/19 16:10:21 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker_bonus.h"

void	rules_exe(t_list **stacka, t_list **stackb, char *str)
{
	if (ft_strcmp(str, "sa\n") == 0)
		stack_s(stacka, 3);
	else if (ft_strcmp(str, "sb\n") == 0)
		stack_s(stacka, 3);
	else if (ft_strcmp(str, "ra\n") == 0)
		stack_r(stacka, 3);
	else if (ft_strcmp(str, "rb\n") == 0)
		stack_r(stacka, 3);
	else if (ft_strcmp(str, "rra\n") == 0)
		stack_rr(stacka, 3);
	else if (ft_strcmp(str, "rrb\n") == 0)
		stack_rr(stacka, 3);
	else if (ft_strcmp(str, "pa\n") == 0)
		stack_pa(stackb, stacka, 3);
	else if (ft_strcmp(str, "pb\n") == 0)
		stack_pb(stacka, stackb, 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:15:13 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/21 17:54:31 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "get_next_line.h"
# include "push_swap.h"

void	rules_exe(t_list **stacka, t_list **stackb, char *str, int *s);
void	rules_exe2(t_list **stacka, t_list **stackb, char *str, int *s);
void	free_exit1(t_list *stacka, t_list *stackb, int *s);

#endif
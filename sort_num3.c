/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_num3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:59:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/16 18:06:31 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	*sorted_array(int *s, int l)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < l)
	{
		j = 0;
		while (j < l - 1)
		{
			if (s[j] > s[j + 1])
			{
				tmp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (s);
}

void	sort_number(t_list *stack, int *s, int l)
{
	int		i;
	int		j;
	t_list	*tmp;

	j = 0;
	tmp = stack;
	i = 0;
	while (tmp && i < l)
	{
		if (tmp && i < l && tmp->a == s[i])
		{
			tmp->i = j;
			i = 0;
			j = 0;
			tmp = tmp->next;
		}
		if (tmp && i < l && tmp->a != s[i])
		{
			i++;
			j++;
		}
	}
}

void	range_set(t_list **stacka, t_list **stackb, int l)
{
	int	range;
	int	e;

	range = 15;
	e = 0;
	if (l >= 500)
		range = 28;
	while ((*stacka))
	{
		if ((*stacka)->i <= e)
		{
			stack_p(stacka, stackb, 1);
			stack_r(stackb, 1);
			e++;
		}
		else if ((*stacka)->i <= range + e)
		{
			stack_p(stacka, stackb, 1);
			e++;
		}
		else
			stack_r(stacka, 0);
	}
	position_set(*stackb);
	stack_set(stacka, stackb, l);
}

void	position_set(t_list *stackb)
{
	t_list	*tmp;
	int		i;

	tmp = stackb;
	i = 0;
	while (tmp)
	{
		tmp->p = i;
		i++;
		tmp = tmp->next;
	}
}

void	stack_set(t_list **stacka, t_list **stackb, int l)
{
	int	len;

	l = l - 1;
	len = 0;
	while (*stackb)
	{
		len = ft_lst_size(*stackb) / 2;
		if ((*stackb)->i == l)
		{
			stack_p(stackb, stacka, 0);
			l--;
		}
		else if (find_max(stackb) < len)
			stack_r(stackb, 1);
		else
			stack_rr(stackb, 1);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:38:17 by abenmous          #+#    #+#             */
/*   Updated: 2023/10/08 19:11:12 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"checker_bonus.h"

void	rules_exe(t_list **stacka, t_list **stackb, char *str, int *s)
{
	if (ft_strcmp(str, "sa\n") == 0)
		stack_s(stacka, 3);
	else if (ft_strcmp(str, "sb\n") == 0)
		stack_s(stackb, 3);
	else if (ft_strcmp(str, "ss\n") == 0)
	{
		stack_s(stackb, 3);
		stack_s(stacka, 3);
	}
	else if (ft_strcmp(str, "ra\n") == 0)
		stack_r(stacka, 3);
	else if (ft_strcmp(str, "rb\n") == 0)
		stack_r(stackb, 3);
	else if (ft_strcmp(str, "rr\n") == 0)
	{
		stack_r(stacka, 3);
		stack_r(stackb, 3);
	}
	else if (ft_strcmp(str, "rra\n") == 0)
		stack_rr(stacka, 3);
	else if (ft_strcmp(str, "rrb\n") == 0)
		stack_rr(stackb, 3);
	else
		rules_exe2(stacka, stackb, str, s);
}

void	rules_exe2(t_list **stacka, t_list **stackb, char *str, int *s)
{
	if (ft_strcmp(str, "rrr\n") == 0)
	{
		stack_rr(stacka, 3);
		stack_rr(stackb, 3);
	}
	else if (ft_strcmp(str, "pb\n") == 0)
		stack_pb(stacka, stackb, 3);
	else if (ft_strcmp(str, "pa\n") == 0)
		stack_pa(stackb, stacka, 3);
	else
	{
		write(2, "Error\n", 6);
		free(str);
		free_exit1((*stacka), (*stackb), s);
	}
}

static int	count(long long int l)
{
	int	j;

	j = 0;
	if (l == 0)
		return (1);
	if (l < 0)
	{
		l = l * -1;
		j++;
	}
	while (l > 0)
	{
		l = l / 10;
		j++;
	}
	return (j);
}

static char	*outcome(int j, int long long t, char *s2)
{
	if (t == 0)
	{
		s2[j] = 48;
		return (s2);
	}
	if (t < 0)
	{
		s2[0] = '-';
		t = t * -1;
	}
	while (t > 0)
	{
		s2[j] = (t % 10) + 48;
		t = t / 10;
		j--;
	}
	return (s2);
}

char	*ft_itoa(long long int nb)
{
	int				i;
	int long long	n;
	char			*s;

	n = nb;
	i = count(n);
	s = malloc(i + 1);
	if (!s)
		return (0);
	s[i] = '\0';
	i--;
	return (outcome(i, n, s));
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:23:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:56:56 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_count(char **av)
{
	int		i;
	char	**str;
	int		j;
	int		k;

	k = 0;
	i = 0;
	while (av[++i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		while (str[j])
		{
			j++;
			k++;
		}
	}
	return (k);
}

int	store_str(char **av)
{
	int		i;
	char	**str;
	int		l;
	int		j;

	i = 0;
	l = num_count(av);
	while (av[++i])
	{
		j = 0;
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			if (!check_error(str[j]))
				return (0);
			j++;
		}
	}
	return (1);
}

int	*store_num(char **av)
{
	char	**str;
	int		*s;
	int		k;
	int		j;
	int		i;

	i = 1;
	k = num_count(av);
	s = (int *)malloc(sizeof (int *) * k);
	k = 0;
	while (av[i])
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			s[k] = ft_atoi(str[j]);
			k++;
			j++;
		}
		i++;
	}
	return (s);
}

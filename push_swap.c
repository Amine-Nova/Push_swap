/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:23:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/04/01 16:12:50 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	store_str(char **av, int *s)
{
	int		i;
	char	**str;
	int		j;

	i = 0;
	while (av[++i])
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			if (!check_error(str[j]))
			{
				free(s);
				free(str[j]);
				free(str);
				write(2, "Error\n", 6);
				exit (1);
			}
			j++;
		}
		free(str);
	}
	return (1);
}

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
			free (str[j]);
			j++;
			k++;
		}
		free (str);
	}
	return (k);
}

int	*store_num(char **av)
{
	char			**str;
	int				*s;
	int				k;
	int				j;
	int				i;

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
			free(str[j]);
				k++;
				j++;
		}
		i++;
		free(str);
	}
	return (s);
}

int	check_mm(char **av, int *s)
{
	char			**str;
	int				j;
	int				i;

	i = 0;
	while (av[++i])
	{
		str = ft_split(av[i], ' ');
		j = -1;
		while (str[++j])
		{
			if (ft_atoi(str[j]) < INT_MIN || ft_atoi(str[j]) > INT_MAX
				|| ft_strlen(ft_itoa(s[j])) > 12)
			{
				free(s);
				free(str[j]);
				free(str);
				write(2, "Error\n", 6);
				exit (1);
			}
			free(str[j]);
		}
		free(str);
	}
	return (1);
}

t_list	*store_list(int *s, char **av)
{
	int		i;
	t_list	*list;
	int		l;

	list = NULL;
	l = num_count(av);
	i = -1;
	while (++i < l)
		ft_lstadd_back(&list, ft_lstnew(s[i]));
	return (list);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:31:16 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/22 14:36:30 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] < 48 || str[i] > 57)
				&& (str[i] != 43 && str[i] != 45))
			|| ((str[i] == 43 || str[i] == 45)
				&& (str[i + 1] == 43 || str[i + 1] == 45
					|| str[i + 1] == 0 || (str[i - 1] >= 48
						&& str[i - 1] <= 57))))
			return (0);
		i++;
	}
	free (str);
	return (1);
}

int	check_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
			i++;
		else
			return (1);
	}
	return (0);
}

int	space_handle(char **av, int *s)
{
	int	i;

	i = 0;
	while (av[i])
	{
		if (check_space(av[i]) == 0)
		{
			free(s);
			write(2, "Error\n", 6);
			exit (1);
		}
		i++;
	}
	return (1);
}

int	cmp_num(int *s, int l)
{
	int	i;
	int	j;

	i = 0;
	l = l - 1;
	while (i < l)
	{
		j = l - 1;
		while (j >= i)
		{
			if (s[l] == s[j])
			{
				free(s);
				write(2, "Error\n", 6);
				exit (1);
			}
			j--;
		}
		l--;
	}
	return (1);
}

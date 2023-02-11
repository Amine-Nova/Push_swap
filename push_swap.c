/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 19:23:06 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/11 13:09:45 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(const char *str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 0;
	while (str[a] == 32 || (str[a] >= 9 && str[a] <= 13))
		a++;
	while (str[a] == '+' || str[a] == '-')
	{
		if (str[a] == '-')
			b = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		c = c * 10 + str[a] - 48;
		a++;
	}
	return (c * b);
}

// int check_dup(char **str)
// {
// }

int	check_error(int c, char **av)
{
	(void)c;
	char **str;
	int	i;
	// int *s;
	int l;
	int j;

	i = 0;
	while(av[++i])
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while(str[j])
		{
			l = 0;
			while(str[j][l])
			{
				if((str[j][l] == '-' || str[j][l] == '+') && (str[j][l + 1] == '-' || str[j][l + 1] == '+'))
					return(0);
				l++;
			}
			j++;
		}
	}
	printf("%d\n", j);
	// while(str[i])
	// {
	// 	s[i] = ft_atoi(str[i]);
	// 	i++;
	// }
	return (0);
}
int main(int ac, char **av)
{
	check_error(ac, av);
}
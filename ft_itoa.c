/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:40:28 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/16 12:05:55 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count(long int l)
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

static char	*outcome(int j, int long t, char *s2)
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

char	*ft_itoa(int nb)
{
	int			i;
	int long	n;
	char		*s;

	n = nb;
	i = count(n);
	s = malloc(i + 1);
	if (!s)
		return (0);
	s[i] = '\0';
	i--;
	return (outcome(i, n, s));
}

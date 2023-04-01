/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:40:28 by abenmous          #+#    #+#             */
/*   Updated: 2023/04/01 16:11:45 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 17:05:11 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/11 12:16:07 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	word_count(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
		i++;
		if (s[i])
		j++;
		while (s[i] && s[i] != c)
		i++;
	}
	return (j);
}

static char	*ft_c(char const *s, char c)
{
	int		i;
	char	*st;

	i = 0;
	while (s[i] && s[i] != c)
			i++;
	st = (char *)my_calloc(1, (i + 1));
	if (!st)
		return (0);
	i = 0;
	while (s[i] && s[i] != c)
	{
		st[i] = s[i];
		i++;
	}
	return (st);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		word;
	int		j;

	j = 0;
	if (!s)
		return (0);
	word = word_count(s, c);
	p = (char **)my_calloc(sizeof(char *), (word + 1));
	if (!p)
		return (0);
	while (*s)
	{
		while (*s == c)
		s++;
		if (*s != c && *s)
			p[j] = ft_c(s, c);
		while (*s != c && *s)
			s++;
		j++;
	}
	return (p);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*str3;

	i = -1;
	j = 0;
	if (!str1 && !str2)
		return (0);
	if (!str1)
		str1 = my_calloc(1, 1);
	str3 = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!str3)
	{
		free(str1);
		return (0);
	}
	while (str1[++i])
		str3[i] = str1[i];
	while (str2[j])
		str3[i++] = str2[j++];
	str3[i] = '\0';
	free(str1);
	return (str3);
}

void	*my_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	len;
	size_t	i;	

	len = count * size;
	str = malloc(len);
	i = 0;
	while (i < len)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:13:09 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/18 16:58:46 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*ft_read(int fd, char *line)
{
	char	str[BUFFER_SIZE + 1];
	int		i;

	i = 1;
	while (!(my_strchr(str, '\n')) && i > 0)
	{
		i = read(fd, str, BUFFER_SIZE);
		if (i == -1)
		{
			free(line);
			return (NULL);
		}
		if (i > 0)
		{
			str[i] = '\0';
			line = my_strjoin(line, str);
		}
	}
	if (!line)
		return (NULL);
	return (line);
}

char	*ft_plus(char *str)
{
	int		i;
	int		j;
	char	*ss;
	int		len;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i] || (str[i] == '\n' && str[i + 1] == 0))
	{
		free(str);
		return (0);
	}
	i++;
	len = my_strlen(str) - i;
	ss = malloc(len + 1);
	j = 0;
	while (str[i])
		ss[j++] = str[i++];
	ss[j] = 0;
	free (str);
	return (ss);
}

char	*get_next_line(int fd)
{
	char		*s;
	static char	*str;

	if (fd < 0 || fd == 1 || fd == 2)
		return (0);
	str = ft_read(fd, str);
	if (!str)
		return (0);
	s = my_strdup(str);
	str = ft_plus(str);
	return (s);
}

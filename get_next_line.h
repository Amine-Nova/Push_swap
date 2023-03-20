/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 11:06:31 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/18 16:57:57 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdlib.h>
# include<unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif

# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0

# endif

char	*get_next_line(int fd);
char	*my_strdup(char *src1);
char	*my_strjoin(char *str1, char *str2);
size_t	my_strlen(char *s);
char	*ft_read(int fd, char *line);
char	*ft_plus(char *str);
char	*my_strchr(char *s, int c);
void	*my_calloc(size_t count, size_t size);

#endif

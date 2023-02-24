/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:18:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/02/24 19:57:16 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_data	data;
	int		*s;
	int		i;
	int		l;

	(void) ac;
	l = num_count(av);
	data.l = l;
	i = space_handle(av);
	if (i == 0)
		return (0);
	i = store_str(av);
	if (i == 0)
		return (0);
	s = store_num(av);
	i = cmp_num(s, l);
	if (i == 0)
		return (0);
	data.str = s;
	data.empty = (int *)malloc(sizeof (int *) * l);
	if (l == 2)
		sort_2num(&data);
	if (l == 3)
		sort_3num(&data);
	return (0);
}

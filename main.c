/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenmous <abenmous@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 17:18:21 by abenmous          #+#    #+#             */
/*   Updated: 2023/03/01 20:27:44 by abenmous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list *stacka;
	t_list *stackb;
	t_list *tmp;
	int		*s;
	int		i;
	int		l;

	(void) ac;
	l = num_count(av);
	i = space_handle(av);
	if (i == 0)
		return (0);
	store_str(av);
	if (i == 0)
		return (0);
	s = store_num(av);
	if(!s)
		return (0);
	i = cmp_num(s, l);
	if (i == 0)
		return (0);
	stacka = store_list(s, av);
	i = -1;
	while(++i < l)
		ft_lstadd_back(&stackb, 0);
	tmp = stackb;
	i = 0;
	while(tmp)
	{
		printf("%d\n", tmp->a);
		tmp = tmp->next;
		i++;
	}
}

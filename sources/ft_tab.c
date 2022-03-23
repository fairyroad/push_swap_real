/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:20:06 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 21:24:50 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_tab	convert_to_tab(t_stack *a)
{
	t_node	*tmp;
	t_tab	tab;
	int		i;

	i = 0;
	tab.v = (int *)malloc(a->size * sizeof(int));
	tab.size = a->size;
	tmp = a->first;
	while (tmp != NULL)
	{
		tab.v[i++] = *((int *)tmp->content);
		tmp = tmp->next;
	}
	return (tab);
}

int	find_index(t_tab *tab, int val)
{
	int		i;

	i = 0;
	while (i < tab->size)
	{
		if (tab->v[i] == val)
			return (i);
		i++;
	}
	return (0);
}

void	sort_tab(t_tab *tab)
{
	int		j;
	int		i;
	int		min;
	int		tmp;

	j = 0;
	while (j < tab->size)
	{
		i = j;
		min = i;
		while (i < tab->size)
		{
			if (tab->v[i] < tab->v[min])
				min = i;
			i++;
		}
		tmp = tab->v[j];
		tab->v[j] = tab->v[min];
		tab->v[min] = tmp;
		j++;
	}
}

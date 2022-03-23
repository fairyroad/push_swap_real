/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:55:09 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:24:22 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	format_stack(t_stack	*a)
{
	t_node	*tmp;
	t_tab	copy;
	int		index;
	int		*val;

	copy = convert_to_tab(a);
	sort_tab(&copy);
	tmp = a->first;
	while (tmp != NULL)
	{
		index = find_index(&copy, *((int *) tmp->content));
		val = malloc(sizeof(int));
		*val = index;
		free(tmp->val);
		tmp->content = val;
		tmp = tmp->next;
	}
	free(copy.v);
}

t_push	initialize_push(void)
{
	t_push	tmp;
	
	tmp.a = list_create();
	tmp.b = list_create();
	return (tmp);
}

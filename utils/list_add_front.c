/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:48:29 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:03:48 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	list_add_front(t_stack *a, void *val)
{
	t_node	*node;
	t_node	*last;
	t_node	*head;

	head = a->first;
	node = list_create_node(val);
	if (head == NULL)
		a->first = node;
	else
	{
		last = a->last;
		if (last == NULL)
			last = head;
		node->next = head;
		head->prev = node;
		a->first = node;
		a->last = last;
	}
	a->size++;
}

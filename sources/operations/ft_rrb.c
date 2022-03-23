/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:35:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:39:25 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_push *push)
{
	int		*tmp;
	t_node	*node;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->b->last->content);
	node = push->b->last->prev;
	node->next = NULL;
	push->b->last = node;
	list_add_front(push->b, tmp);
	write(1, "rrb\n", 4);
}

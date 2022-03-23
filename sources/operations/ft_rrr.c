/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:39:31 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:43:26 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrr(t_push *push)
{
	int		*tmp;
	int		*tmp2;
	t_node	*node;
	t_node	*node2;

	tmp = malloc(sizeof(int));
	tmp2 = malloc(sizeof(int));
	*tmp = *((int *) push->a->last->content);
	*tmp2 = *((int *) push->b->last->content);
	node = push->a->last->prev;
	node2 = push->b->last->prev;
	node->next = NULL;
	node2->next = NULL;
	push->a->last = node;
	push->b->last = node2;
	list_add_front(push->a, tmp);
	list_add_front(push->b, tmp2);
	write(1, "rrr\n", 4);
}

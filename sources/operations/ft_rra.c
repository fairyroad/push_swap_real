/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:28:42 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:39:19 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_push *push)
{
	int		*tmp;
	t_node	*node;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->a->last->content);
	node = push->a->last->prev;
	node->next = NULL;
	push->a->last = node;
	list_add_front(push->a, tmp);
	write(1, "rra\n", 4);
}

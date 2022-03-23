/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:51:57 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 17:57:40 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_push *push)
{
	t_node	*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->b->first->content);
	list_add_front(push->a, tmp);
	node = push->b->first->next;
	list_remove(push->a, push->b->first, free);
	push->b->first = node;
	write(1, "pa\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:07:49 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:09:31 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_push *pus)
{
	t_node	*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->a->first->content);
	list_add_front(push->b, tmp);
	node = push->a->first->next;
	list_remove(push->b, push->a->first, free);
	push->a->first = node;
	write(1, "pb\n", 3);
}

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

void	pb(t_push *tmp)
{
	t_node	*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) tmp->a->first->content);
	list_add_front(tmp->b, tmp);
	node = tmp->a->first->next;
	list_remove(tmp->b, tmp->a->first, free);
	tmp->a->first = node;
	write(1, "pb\n", 3);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:09:56 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:19:24 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_push *push)
{
	t_node		*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->a->first->content);
	node = push->a->first->next;
	list_add_last(push->a, tmp);
	list_remove(push->a, push->a->first, free);
	push->a->first = node;
	write(1, "ra\n", 3);
}

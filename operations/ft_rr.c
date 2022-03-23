/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:23:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:26:24 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rr(t_push *push)
{
	t_stack		*node;
	t_stack		*node2;
	int		*tmp;
	int		*tmp2;

	tmp = malloc(sizeof(int));
	tmp2 = malloc(sizeof(int));
	*tmp = *((int *) push->a->first->content);
	*tmp2 = *((int *) push->b->first->content);
	node = push->a->first->next;
	node2 = push->b->first->next;
	list_add_last(push->a, tmp);
	list_add_last(push->b, tmp2);
	list_remove(push->a, push->a->first, free);
	list_remove(push->b, push->b->first, free);
	write(1, "rr\n", 3);
}

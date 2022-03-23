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
	int		tmp;
	int		tmp2;

	node = push->a;
	node2 = push->b;
	tmp = *((int *) node->first->next->content);
	tmp2 = *((int *) node2->first->next->content);
	*((int *) node->first->next->content) = *((int *) node->first->content);
	*((int *) node2->first->next->content) = *((int *) node2->first->content);
	*((int *) node->first->content) = tmp;
	*((int *) node2->first->content) = tmp2;
	write(1, "rr\n", 3);
}

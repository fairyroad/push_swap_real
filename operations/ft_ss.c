/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ss.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:46:16 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 18:36:49 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_push *push)
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
	write(1, "ss\n", 3);
}

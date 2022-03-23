/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:59:35 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 18:36:02 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_push *push)
{
	t_stack		*node;
	int		tmp;

	node = push->b;
	tmp = *((int *) node->first->next->content);
	*((int *) node->first->next->content) = *((int *) node->first->content);
	*((int *) node->first->content) = tmp;
	write(1, "sb\n", 3);
}

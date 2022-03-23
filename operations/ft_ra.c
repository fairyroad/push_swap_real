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
	t_stack		*node;
	int		tmp;

	node = push->a;
	tmp = *((int *) node->first->next->content);
	*((int *) node->first->next->content) = *((int *) node->first->content);
	*((int *) node->first->content) = tmp;
	write(1, "ra\n", 3);
}

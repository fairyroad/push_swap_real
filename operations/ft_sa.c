/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:42:26 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 18:36:53 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_push *push)
{
	t_stack		*node;
	int		tmp;

	node = push->a;
	tmp = *((int *) node->first->next->content);
	*((int *) node->first->next->content) = *((int *) node->first->content);
	*((int *) node->first->content) = tmp;
	write(1, "sa\n", 3);
}

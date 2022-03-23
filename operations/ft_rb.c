/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 20:18:46 by ygil              #+#    #+#             */
/*   Updated: 2022/03/10 20:23:28 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rb(t_push *push)
{
	t_stack		*node;
	int		tmp;

	node = push->b;
	tmp = *((int *) node->first->next->content);
	*((int *) node->first->next->content) = *((int *) node->first->content);
	*((int *) node->first->content) = tmp;
	write(1, "rb\n", 3);
}

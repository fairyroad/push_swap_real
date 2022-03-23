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
	t_push		*node;
	int		*tmp;

	tmp = malloc(sizeof(int));
	*tmp = *((int *) push->b->first->content);
	node = push->b->first->next;
	list_add_last(push->b, tmp);
	list_remove(push->b, push->b->first, free);
	write(1, "rb\n", 3);
}

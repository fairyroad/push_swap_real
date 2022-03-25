/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:05:29 by ygil              #+#    #+#             */
/*   Updated: 2022/03/25 14:50:41 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_three(t_push *tmp)
{
	int		first;
	int		second;
	int		third;

	first = *((int *) tmp->a->first->content);
	second = *((int *) tmp->a->first->next->content);
	third = *((int *) tmp->a->last->content);
	if (first > second && second < third && first < third)
		sa(tmp);
	else if (first > second && second > third)
	{
		sa(tmp);
		rra(tmp);
	}
	else if (first < second && second > third && first < third)
	{
		sa(tmp);
		ra(tmp);
	}
	else if (first > second && second < third && first > third)
		ra(tmp);
	else if (first < second && second > third && first > third)
		rra(tmp);
}

static void	sort_fourfive(t_push *tmp, int	pivot)
{
	int		cnt;
	t_stack	*a;
	t_stack	*b;

	a = tmp->a;
	b = tmp->b;
	cnt = 0;
	while (cnt < pivot)
	{
		if (*((int *) a->first->content) < pivot)
		{
			pb(tmp);
			cnt++;
		}
		else
			ra(tmp);
	}
	sort_three(tmp);
	if (pivot > 1)
	{
		if (*((int *) b->first->content) < *((int *) b->last->content))
			sb(tmp);
		pa(tmp);
	}
	pa(tmp);
}

void	sort_smallsize(t_push *tmp)
{
	int		first;
	int		last;

	first = *((int *) tmp->a->first->content);
	last = *((int *) tmp->a->last->content);
	if (tmp->a->size == 2 && first > last)
		ra(tmp);
	else if (tmp->a->size == 3)
		sort_three(tmp);
	else if (tmp->a->size == 4)
		sort_fourfive(tmp, 1);
	else if (tmp->a->size == 5)
		sort_fourfive(tmp, 2);
}

void	sort_bigsize(t_push *tmp)
{
	int		size;
	int		bit;
	int		top;
	int		i;
	int		j;

	size = tmp->a->size;
	bit = 0;
	while ((size - 1) >> bit != 0)
		bit++;
	i = -1;
	while (++i < bit)
	{
		j = -1;
		while (++j < size)
		{
			top = *((int *) tmp->a->first->content);
			if (((top >> i) & 1) == 1)
				ra(tmp);
			else
				pb(tmp);
		}
		while (tmp->b->first != NULL)
			pa(tmp);
	}
}

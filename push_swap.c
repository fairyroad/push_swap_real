/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:37:33 by ygil              #+#    #+#             */
/*   Updated: 2022/03/16 21:58:40 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int	argc, char	**argv)
{
	t_push	tmp;
	t_tab	copy;

	stacks = parse_arguments(argc, argv);
	copy = convert_to_tab(tmp.a);
	if (check_duplicate(&copy))
	{
		if (!check_sorted(&copy))
		{
			format_stack(tmp.a);
			if (tmp.a->size > 5)
				sort_bigsize(&tmp);
			else
				sort_smallsize(&tmp);
		}
	}
	else
		write(1, "ERROR\n", 6);
	free(copy.v);
	list_clear(tmp.a, free);
	list_clear(tmp.b, free);
	return (0);
}

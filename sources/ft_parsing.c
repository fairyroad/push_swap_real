/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:33:46 by ygil              #+#    #+#             */
/*   Updated: 2022/03/25 14:53:00 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	parse_array(t_push *push, int argc, char **argv, int start)
{
	int		i;
	int		*tmp;

	i = start;
	while (i < argc)
	{
		if (!check_integer(argv[i]))
		{
			write(1, "ERROR\n", 6);
			exit(1);
		}
		tmp = malloc(sizeof(int));
		*tmp = ft_atoi(argv[i]);
		list_add_last(push->a, tmp);
		i++;
	}
}

static void	parse_string(t_push *tmp, char *argv)
{
	char	**num;
	int		i;

	num = ft_split(argv, ' ');
	i = 0;
	while (num[i] != NULL)
		i++;
	parse_array(tmp, i, num, 0);
	i = 0;
	while (num[i] != NULL)
		free(num[i++]);
	free(num);
}

t_push	parse_arguments(int argc, char **argv)
{
	t_push	tmp;

	tmp = initialize_push();
	if (argc == 2 && !check_integer(argv[1]))
		parse_string(&tmp, argv[1]);
	else
		parse_array(&tmp, argc, argv, 1);
	return (tmp);
}

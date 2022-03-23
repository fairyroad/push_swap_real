/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygil <ygil@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 18:23:23 by ygil              #+#    #+#             */
/*   Updated: 2022/03/17 19:09:53 by ygil             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_node
{
	struct s_node	*prev;
	struct s_node	*next;
	void				*content;
}	t_node;

typedef struct s_stack
{
	struct s_node	*first;
	struct s_node	*last;
	int				size;
}	t_stack;

typedef struct s_tab
{
	int		*v;
	int		size;
}	t_tab;

typedef struct s_push
{
	t_stack	*a;
	t_stack	*b;
}	t_push;

t_tab		convert_to_tab(t_stack	*a);
int			check_integer(char	*str);
int			check_duplicate(t_tab	*tab);
int			check_sorted(t_tab	*tab);
void		format_stack(t_stack	*a);
void		sort_smallsize(t_stack	*a, t_stack	*b);
void		sort_bigsize(t_stack *a, t_stack *b);
int			find_index(t_tab *tab, int val);
void		sort_tab(t_tab *tab);
int			ft_isdigit(int c);
int			ft_isspace(int c);

size_t		ft_strlcpy(char *dest, const char *src, size_t size);
int			ft_atoi(const char *str);
char		**ft_split(char const *str, char c);
void		list_add_front(t_stack *a, void *val);
void		list_add_last(t_stack *a, void *content);
void		list_remove(t_stack *a, t_node *node, void (*del)(void*));
void		list_clear(t_stack *a, void (*del)(void*));
t_node		*list_create_node(void *content);
t_stack		*list_init(void);

void		pa(t_push *push);
void		pb(t_push *push);
void		ra(t_push *push);
void		rb(t_push *push);
void		rr(t_push *push);
void		rra(t_push *push);
void		rrb(t_push *push);
void		rrr(t_push *push);
void		sa(t_push *push);
void		sb(t_push *push);
void		ss(t_push *push);
void		parse_arguments(int argc, char **argv);

#endif

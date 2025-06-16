/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:06:36 by g24force          #+#    #+#             */
/*   Updated: 2025/06/16 16:46:06 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
#include <limits.h> //posso manter esta?

// TODO: DELETE NAO TE ESQUECAS
# include <stdio.h>

typedef struct s_node
{
	long			value;
	struct s_node	*next;
}	t_node;

typedef struct s_stack
{
	int		count;
	t_node	*head;
	t_node	*tail;
}	t_stack;

// del.c TODO: DELETE NAO TE ESQUECAS
void	print_stack(t_stack *stack);
void	print_stacks(t_stack *stack_a, t_stack *stack_b);


// 		***OPERATIONS***

// push.c
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);

//reverse.c
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack_a, t_stack *stack_b);

// rotate.c
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack_a, t_stack *stack_b);

// swap.c
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);

// op_utils.c
void	stack_add_top(t_stack *stack, t_node *new);
t_node	*stack_get_last(t_stack *stack);
t_node	*stack_get_second_to_last(t_stack *stack);

// 		***SORTING AND ALGORITHMS***

// sorting.c
int	is_sorted(t_stack *stack);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:09:15 by gjose-fr          #+#    #+#             */
/*   Updated: 2025/06/16 13:34:48 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Shifts all the elements of the stack a down by one position.
void	rra(t_stack *stack)
{
	t_node	*second_to_last;
	t_node	*old_tail;

	if (stack->count < 2)
		return ;
	second_to_last = stack_get_second_to_last(stack);
	old_tail = stack->tail;
	second_to_last->next = NULL;
	old_tail->next = stack->head;
	stack->head = old_tail;
	stack->tail = second_to_last;
}

// Shifts all the elements of the stack b down by one position.
void	rrb(t_stack *stack)
{
	t_node	*second_to_last;
	t_node	*old_tail;

	if (stack->count < 2)
		return ;
	second_to_last = stack_get_second_to_last(stack);
	old_tail = stack->tail;
	second_to_last->next = NULL;
	old_tail->next = stack->head;
	stack->head = old_tail;
	stack->tail = second_to_last;
}

// Shifts all the elements of both stacks down by one position at the same time.
void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
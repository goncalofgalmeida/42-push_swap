/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:53:38 by g24force          #+#    #+#             */
/*   Updated: 2025/06/16 12:17:43 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Shifts all the elements of the stack a up by one position.
void	ra(t_stack *stack)
{
	t_node *initial_head;

	if (stack->count < 2)
		return ;
	initial_head = stack->head;
	stack->head = initial_head->next;
	stack->tail->next = initial_head;
	stack->tail = initial_head;
	stack->tail->next = NULL;
}

// Shifts all the elements of the stack b up by one position.
void	rb(t_stack *stack)
{
	t_node *initial_head;

	if (stack->count < 2)
		return ;
	initial_head = stack->head;
	stack->head = initial_head->next;
	stack->tail->next = initial_head;
	stack->tail = initial_head;
	stack->tail->next = NULL;
}

// Shifts all the elements of both stacks up by one position at the same time.
void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

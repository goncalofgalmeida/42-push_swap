/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:53:38 by g24force          #+#    #+#             */
/*   Updated: 2025/06/13 16:44:39 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_node	*stack_get_last(t_stack *stack)
{
	t_node	*current_node;

	if (stack->head == NULL)
		return (NULL);
	current_node = stack->head;
	while (current_node->next != NULL)
		current_node = current_node->next;
	return (current_node);
}

t_node	*stack_get_second_to_last(t_stack *stack)
{
	t_node	*current_node;

	current_node = stack->head;
	if (!current_node || !current_node->next)
		return (NULL);
	while (current_node->next != stack->tail)
		current_node = current_node->next;
	return (current_node);
}

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

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}

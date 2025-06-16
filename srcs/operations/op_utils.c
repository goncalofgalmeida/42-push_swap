/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:09:36 by gjose-fr          #+#    #+#             */
/*   Updated: 2025/06/16 12:10:45 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	stack_add_top(t_stack *stack, t_node *new)
{
	new->next = stack->head;
	stack->head = new;
}

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

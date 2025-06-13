/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:37:46 by g24force          #+#    #+#             */
/*   Updated: 2025/06/13 13:01:08 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


// Swaps the first 2 elements of stack a 
void	sa(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->count < 2)
		return ;
	first = stack->head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->head = second;
}

// Swaps the first 2 elements of stack b
void	sb(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack->count < 2)
		return ;
	first = stack->head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	stack->head = second;
}

// Swaps the first 2 elements of both stacks at the same time
void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

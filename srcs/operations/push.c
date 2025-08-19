/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: school <school@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:53:32 by g24force          #+#    #+#             */
/*   Updated: 2025/08/19 20:19:19 by school           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Takes the first element of stack b and puts it on top of stack a
void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;

	if (stack_b->count < 1)
		return ;
	temp = stack_b->head;
	stack_b->head = stack_b->head->next;
	stack_b->count--;
	if (stack_a->count == 0)
		stack_a->tail = temp;
	stack_add_top(stack_a, temp);
	stack_a->count++;
}

// Takes the first element of stack a and puts it on top of stack b
void	pb(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*temp;

	if (stack_a->count < 1)
		return ;
	temp = stack_a->head;
	stack_a->head = stack_a->head->next;
	stack_a->count--;
	if (stack_b->count == 0)
		stack_b->tail = temp;
	stack_add_top(stack_b, temp);
	stack_b->count++;
}

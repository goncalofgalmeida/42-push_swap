/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:53:32 by g24force          #+#    #+#             */
/*   Updated: 2025/06/16 12:10:25 by gjose-fr         ###   ########.fr       */
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
	stack_add_top(stack_b, temp);
	stack_b->count++;
}

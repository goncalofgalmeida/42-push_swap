/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g24force <g24force@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:53:32 by g24force          #+#    #+#             */
/*   Updated: 2025/06/10 18:34:44 by g24force         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// move function somewhere else
void	stack_add_top(t_stack *stack, t_node *new)
{
	new->next = stack->head;
	stack->head = new;
}

void	pa(t_stack *stack_b, t_stack *stack_a)
{
	int	temp;

	if (stack_b->count < 1)
		return ;
	stack_add_top(stack_a, stack_b->head);
	stack_a->count++;
	stack_b->head = stack_b->head->next;
	stack_b->count--;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

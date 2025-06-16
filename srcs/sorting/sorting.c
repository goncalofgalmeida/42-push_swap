/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:40:18 by gjose-fr          #+#    #+#             */
/*   Updated: 2025/06/16 17:32:24 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_node	*current;
	int		previous_val;
	
	previous_val = INT_MIN; // what if the first value is INT_MIN?
	current = stack->head;
	while (current)
	{
		if (current->value < previous_val)
			return (0);
		previous_val = current->value;
		current = current->next;
	}
	return (1);
}

void	sort_three(t_stack *stack_a, t_stack *stack_b)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	(void)stack_b;
	first = stack_a->head;
	second = stack_a->head->next;
	second = stack_a->head->next->next;
	if (first > second && first > third && second < third)
		ra(stack_a);
	if (first > second && first > third && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	if (first < second && first < third && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	if (first < second && first > third && second > third)
		rra(stack_a);
	if (first > second && first < third && second < third)
		sa(stack_a);
}

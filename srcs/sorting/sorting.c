/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: school <school@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:40:18 by gjose-fr          #+#    #+#             */
/*   Updated: 2025/08/19 20:10:52 by school           ###   ########.fr       */
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

void	sort_three(t_stack *stack_a)
{
	long	first;
	long	second;
	long	third;

	first = stack_a->head->value;
	second = stack_a->head->next->value;
	third = stack_a->head->next->next->value;
	if (first > second && first > third && second < third)
		ra(stack_a);
	else if (first > second && first > third && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first < second && first < third && second > third)
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (first < second && first > third && second > third)
		rra(stack_a);
	else if (first > second && first < third && second < third)
		sa(stack_a);
}

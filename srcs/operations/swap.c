/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: g24force <g24force@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:37:46 by g24force          #+#    #+#             */
/*   Updated: 2025/06/10 18:24:26 by g24force         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *stack)
{
	int	temp;

	if (stack->count < 2)
		return ;
	temp = stack->head->next->value;
	stack->head->next->value = stack->head->value;
	stack->head->value = temp;
}

void	sb(t_stack *stack)
{
	int	temp;

	if (stack->count < 2)
		return ;
	temp = stack->head->next->value;
	stack->head->next->value = stack->head->value;
	stack->head->value = temp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

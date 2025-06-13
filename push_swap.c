/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjose-fr <gjose-fr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 11:03:48 by g24force          #+#    #+#             */
/*   Updated: 2025/06/13 13:41:50 by gjose-fr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	disp_error(void)
{
	ft_putendl_fd("Error", 2);
}

/* int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		(void)argv; // delete
		return (1);
	}
	return (0);
} */

// TESTS MAIN
int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		(void)argv; // delete
		return (1);
	}
	t_node n2 = {2, NULL};
	t_node n1 = {1, &n2};
	t_stack stack_a = {2, &n1, &n2};

	t_node n4 = {4, NULL};
	t_node n3 = {3, &n4};
	t_stack stack_b = {2, &n3, &n4};

	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	print_stack(&stack_a);
	sa(&stack_a);
	printf("\nOperation: sa\n");
	print_stack(&stack_a);
	sa(&stack_a);;
	printf("\nOperation: sa\n");
	print_stack(&stack_a);
	return (0);
}

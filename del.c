#include "includes/push_swap.h"

// delete debug function
void	print_stack(t_stack *stack)
{
	t_node *current_node = stack->head;

	while (current_node)
	{
		printf("%li\n", current_node->value);
		printf("|\n");
		current_node = current_node->next;
	}
	printf("NULL\n");
}

// delete debug function
void	print_stacks(t_stack *stack_a, t_stack *stack_b)
{
	printf("\nSTACK A:\n");
	print_stack(stack_a);
	printf("\nSTACK B:\n");
	print_stack(stack_b);
}

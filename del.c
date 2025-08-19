#include "includes/push_swap.h"
#include <string.h>

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

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		(void)argv; // delete
		return (1);
	}
	t_node n3 = {2, NULL};
	t_node n2 = {1, &n3};
	t_node n1 = {3, &n2};
	t_stack stack_a = {3, &n1, &n3};

	t_stack stack_b = {0, NULL, NULL};
	(void)stack_b;

	printf("\nINITIAL STACK A:\n");
	print_stack(&stack_a);
	sort_three(&stack_a);
	printf("\nSORTED STACK A:\n");
	print_stack(&stack_a);
	return (0);
}

// Test operation functions
/* int	main(int argc, char **argv)
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
	rra(&stack_a);
	printf("\nOperation: rra\n");
	print_stack(&stack_a);
	rra(&stack_a);
	printf("\nOperation: rra\n");
	print_stack(&stack_a);
	rra(&stack_a);
	printf("\nOperation: rra\n");
	print_stack(&stack_a);
	rra(&stack_a);;
	printf("\nOperation: rra\n");
	print_stack(&stack_a);
	return (0);
} */

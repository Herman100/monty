#include "monty.h"

/**
 * free_stack - Frees all nodes in a stack.
 * @stack: Pointer to the top of the stack.
 *
 * Description: This function frees all the nodes in a stack, including the
 *              memory allocated for each node. It iterates through the stack,
 *              starting from the top, and frees each node until the stack is
 *              empty (NULL).
 */


void free_stack(stack_t *stack)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
}

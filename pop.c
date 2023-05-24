#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number of the pop opcode.
 *
 * Description: If the stack is empty, it prints an error message and exits
 * with a failure status. Otherwise, it removes the top element of the stack,
 * updating the stack pointer and freeing the memory of the removed node.
 */



void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number of the pint opcode.
 *
 * Description: If the stack is empty, it prints an error message and exits
 * with a failure status. Otherwise, it
 * prints the value at the top of the stack
 * followed by a new line.
 */

void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}

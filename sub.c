#include "monty.h"

/**
 * sub - Subtract the top two elements of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description: This function subtracts the
 * value of the second element from the
 * value of the top element of the stack. The result is then stored
 * in the top element of the stack, and the second element is removed.
 * If the stack is empty or contains only one element, an error message
 * is printed, and the program exits with a failure status.
 */


void sub(stack_t **stack, unsigned int line_number)
{
	int result;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
	(*stack)->n = result;
}

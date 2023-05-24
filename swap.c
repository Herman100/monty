#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number of the swap opcode.
 *
 * Description: If the stack has less than
 * two elements, it prints an error
 * message and exits with a failure status.
 * Otherwise, it swaps the values of
 * the top two elements of the stack.
 */



void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}

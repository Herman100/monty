#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number of the add opcode.
 *
 * Description: If the stack has less than two elements, it prints an error
 * message and exits with a failure status. Otherwise, it adds the values of
 * the top two elements of the stack, replaces the top node with the sum, and
 * frees the memory of the removed node.
 */



void add(stack_t **stack, unsigned int line_number)
{
	int sum;
	stack_t *temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = (*stack)->n + (*stack)->next->n;
	temp = *stack;
	*stack = (*stack)->next;
	(*stack)->n = sum;
	free(temp);
}

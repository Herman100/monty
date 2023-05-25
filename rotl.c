#include "monty.h"


/**
 * rotl - Rotate the stack to the top.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description: This function rotates the stack
 * to the top by moving the second element to the top.
 * The top element becomes the last element, and the second
 * element becomes the new top.
 * If the stack is empty or contains only one element,
 * no rotation is performed.
 * The function takes into account the line number but
 * does not use it for any specific operation.
 */


void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *second_top = NULL;

	(void)line_number;
	if (!top || !top->next)
		return;

	second_top = top->next;
	while (top->next)
		top = top->next;

	top->next = *stack;
	(*stack)->prev = top;
	(*stack)->next = NULL;
	second_top->prev = NULL;
	*stack = second_top;
}

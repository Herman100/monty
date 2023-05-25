#include "monty.h"


/**
 * rotr - Rotate the stack to the bottom.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description: This function rotates the stack to the bottom, moving the top
 * element to the bottom. The top element becomes the new bottom, and all other
 * elements are shifted up by one position. The previous bottom element becomes
 * the new top. If the stack is empty or
 * contains only one element, the rotation
 * has no effect. The line number argument is unused in this function.
 */


void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;
	stack_t *second_last = NULL;

	(void)line_number;
	if (!top || !top->next)
		return;

	while (top->next)
	{
		second_last = top;
		top = top->next;
	}

	second_last->next = NULL;
	top->prev = NULL;
	top->next = *stack;
	(*stack)->prev = top;
	*stack = top;
}

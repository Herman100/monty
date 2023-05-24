#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Pointer to the top of the stack.
 * @line_number: The line number of the nop opcode.
 *
 * Description: This function is used as a
 * placeholder for an assembly instruction
 *that does nothing. It is typically used
 *for alignment or timing purposes.
 *The function takes the parameters 'stack' and 'line_number' to conform
 *to the function pointer type used in the Monty interpreter.
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

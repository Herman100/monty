#include "monty.h"


/**
 * set_stack - Set the data structure to stack mode.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 * @data_format: Pointer to the data format flag.
 *
 * Description: This function is used to set the data structure to stack mode.
 * It updates the data format flag to indicate that the operations should be
 * performed in stack mode rather than queue mode. The stack and line number
 * arguments are unused in this function.
 */

void set_stack(stack_t **stack, unsigned int line_number, int *data_format)
{
	(void)stack;
	(void)line_number;
	*data_format = 1;
}

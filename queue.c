#include "monty.h"

/**
 * set_queue - Set the data structure to queue mode.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 * @data_format: Pointer to the data format flag.
 *
 * Description: This function is used to set the data structure to queue mode.
 * It updates the data format flag to indicate that the operations should be
 * performed in queue mode rather than stack mode. The stack and line number
 * arguments are unused in this function.
 */


void set_queue(stack_t **stack, unsigned int line_number, int *data_format)
{
	(void)stack;
	(void)line_number;
	*data_format = 0;
}

#include "monty.h"


/**
 * push - Pushes an integer onto a stack
 * @stack: Double pointer to the stack
 * @line_number: Line number where the push operation is performed
 * @n: String representation of the integer to be pushed
 *
 * Description: This function pushes an
 * integer onto a stack. It takes a double
 * pointer to the stack, the line number
 * where the push operation is performed,
 * and a string representation of the integer to be pushed.
 * If the string is * not a valid integer or is NULL,
 * an error message is printed to stderr, and
 * the program exits with failure. Otherwise, the string is converted to an
 * integer using the atoi function, and the resulting integer is added to the
 * stack using the add_node function.
 */

void push(stack_t **stack, unsigned int line_number, char *n)
{
	int num;

	if (n == NULL || _isdigit(n) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	num = atoi(n);
	add_node(stack, num);
}

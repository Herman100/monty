#include "monty.h"

/**
 * pchar - Print the character value of the top element of the stack.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description: This function prints the character
 * value of the top element
 * of the stack. If the stack is empty,
 * an error message is printed, and the
 * program exits with a failure status.
 * Additionally, if the value of the top
 * element is outside the range of
 * ASCII characters (0-127), an error message
 * is printed, and the program exits with a failure status.
 * The character value
 * is printed followed by a newline character.
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	int value;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = (*stack)->n;
	if (value < 0 || value > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}

	putchar(value);
	putchar('\n');
}

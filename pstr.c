#include "monty.h"

/**
 * pstr - Prints the string starting at the
 * top of the stack, followed by a newline.
 * @stack: Double pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Description: This function traverses the
 * stack starting from the top, printing each
 * ASCII character value as a character until
 * it reaches a null byte (0) or an
 * invalid ASCII character (not within the range 1-127).
 * After printing the characters, a newline character is printed.
 * If the stack is empty or does not contain a valid
 * string, no characters are printed.
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;
	current = *stack;
	while (current != NULL && current->n != 0 &&
(current->n > 0 && current->n <= 127))
	{
		putchar(current->n);
		current = current->next;
	}
	putchar('\n');
}

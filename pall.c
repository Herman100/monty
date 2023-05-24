#include "monty.h"
/**
 * pall - Prints all the elements in a stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number (unused, included for compatibility)
 *
 * Description:
 * This function prints all the elements in the stack from top to bottom.
 * It iterates through the stack starting from the top and prints the value
 * of each element using the format "%d\n".
 *
 * Return: void
 */


void pall(stack_t **stack, unsigned int line_number __attribute__((unused)))
{
	stack_t *temp;

	temp = *stack;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}

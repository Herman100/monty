#include "monty.h"

/**
 * _isdigit - Checks if a string consists of digits.
 * @str: The string to be checked.
 *
 * Return: 1 if the string consists of digits, 0 otherwise.
 *
 * Description: This function checks if a given
 * string consists only of digits.
 * It returns 1 if the string is a valid positive or negative integer,
 * and 0 otherwise. The function ignores leading '-' if present.
 */
int _isdigit(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '-' && i == 0)
			continue;
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}

/**
 * add_node - Adds a new node to the top of the stack.
 * @stack: Pointer to the top of the stack.
 * @n: The value to be stored in the new node.
 *
 * Description: This function creates a new node,
 * assigns the given value to it,
 *and adds it to the top of the stack. If memory allocation fails,
 *an error message is printed, and the program exits with a failure
 *status.
 */
void add_node(stack_t **stack, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}

#include "monty.h"

/**
 * add_node_end - Add a new node at the end of the stack.
 * @stack: Double pointer to the top of the stack.
 * @n: Value to be stored in the new node.
 *
 * Description: This function creates a new node with the given value and
 * adds it at the end of the stack. If the stack is empty, the new node
 * becomes the top and only element in the stack. The line number argument
 * is unused in this function.
 */

void add_node_end(stack_t **stack, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *last = *stack;

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*stack == NULL)
	{
		new_node->prev = NULL;
		*stack = new_node;
		return;
	}
	while (last->next)
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
}

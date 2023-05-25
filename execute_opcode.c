#include "monty.h"
#include <string.h>

/**
 * execute_opcode - Execute the opcode instruction.
 * @opcode: The opcode to be executed.
 * @arg: The argument associated with the opcode.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the Monty file.
 *
 * Return: 1 if the opcode is successfully executed, 0 otherwise.
 *
 * Description: This function executes the
 * specified opcode instruction based on
 * the provided opcode string. It compares the opcode string with
 * known opcode instructions and calls the corresponding function
 * implementation if a match is found. The function returns 1 if the
 * opcode is successfully executed and 0 if the opcode is not found.
 */

int execute_opcode(char *opcode, char *arg,
stack_t **stack, unsigned int line_number)
{
	if (strcmp(opcode, "push") == 0)
		push(stack, line_number, arg);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack, line_number);
	else if (strcmp(opcode, "add") == 0)
		add(stack, line_number);
	else if (strcmp(opcode, "sub") == 0)
		sub(stack, line_number);
	else if (strcmp(opcode, "div") == 0)
		division(stack, line_number);
	else if (strcmp(opcode, "mul") == 0)
		mul(stack, line_number);
	else if (strcmp(opcode, "mod") == 0)
		mod(stack, line_number);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(stack, line_number);
	/* add more instructions here */
	else
		return (0); /* opcode not found */
	return (1); /* opcode successfully executed */
}

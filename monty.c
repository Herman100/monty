#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
#define MAX_LINE_LENGTH 1024


/**
*main - Entry point of the Monty program
*@argc: The number of command-line arguments
*@argv: An array of strings containing the command-line arguments
*Description: This function serves as the entry point for the Monty program.
*It reads a file specified as a command-line argument, parses each line in
*the file, and performs the corresponding operations based on the Monty
*language commands.
*Return: EXIT_SUCCESS on successful execution, or
*EXIT_FAILURE if an error occurs.
*/

int main(int argc, char **argv)
{
	FILE *file;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	char line[MAX_LINE_LENGTH];
	char *opcode, *arg;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, MAX_LINE_LENGTH, file) != NULL)
	{
		line_number++;
		opcode = strtok(line, " \t\n");
		if (opcode == NULL || opcode[0] == '#')
			continue;
		arg = strtok(NULL, " \t\n");
		if (!execute_opcode(opcode, arg, &stack, line_number))
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
			exit(EXIT_FAILURE);
		}
	}

	free_stack(stack);
	fclose(file);
	return (EXIT_SUCCESS);
}

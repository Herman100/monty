#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/*Fuction codes would be below this comment*/

void pall(stack_t **stack, unsigned int line_number __attribute__((unused)));
void pint(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);
void nop(stack_t **stack, unsigned int line_number);
int _isdigit(char *str);
void add_node(stack_t **stack, int n);
void sub(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void division(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void set_queue(stack_t **stack, unsigned int line_number, int *data_format);
void set_stack(stack_t **stack, unsigned int line_number, int *data_format);
int execute_opcode(char *opcode, char *arg,
stack_t **stack, unsigned int line_number, int *data_format);
void push(stack_t **stack, unsigned int line_number, char *n, int data_format);
void add_node_end(stack_t **stack, int n);




/*Explicit declaration of certain used functions*/



#endif /* MONTY_H */

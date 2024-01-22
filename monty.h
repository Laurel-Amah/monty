#ifndef MONTY_H
#define MONTY_H

#include <ctype.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
/**
 * struct Bus_s - structure for holding
 * different data types
 * @Arg: argument to be printed
 * @stream: place holder for file
 * @holder: content holder
 * @line: line number
 */
typedef struct Bus_s
{
	char *Arg;
	FILE *stream;
	char *holder;
	int line;
} Bus_t;
extern Bus_t Bus;
void f_pchar(stack_t **heads, unsigned int count);
void f_pall(stack_t **head, unsigned int stack_counter);
void f_push(stack_t **head, unsigned int count);
void stack_free(stack_t *h);
void add_node(stack_t **h, int u);
void add_queue(stack_t **h, int a);
void stack_free(stack_t *h);
void f_div(stack_t **head, unsigned int counter);
void f_mod(stack_t **heads, unsigned int count);
void f_mul(stack_t **heads, unsigned int count);
void f_pstr(stack_t **heads, unsigned int count);
void f_nop(stack_t **heads, unsigned int count);
void f_queue(stack_t **heads, unsigned int count);
void f_rotl(stack_t **heads,  __attribute__((unused)) unsigned int count);
void f_rotr(stack_t **heads, __attribute__((unused)) unsigned int count);
void f_stack(stack_t **heads, unsigned int count);
void f_sub(stack_t **heads, unsigned int count);
void f_swap(stack_t **heads, unsigned int count);
void f_pint(stack_t **heads, unsigned int count);
void f_pop(stack_t **heads, unsigned int count);
void f_add(stack_t **head, unsigned int count);
void f_add(stack_t **head, unsigned int count);
void f_pall(stack_t **head, unsigned int stack_counter);

#endif

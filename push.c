#include "monty.h"

/**
 * push - Pushes an element to the stack.
 * @m: element to be push
 */
stack_t *stack = NULL;

void push(int m)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", m);
		exit(EXIT_FAILURE);
	}
	new->n = m;
	new->prev = NULL;
	new->next = stack;

	if (stack != NULL)
	{
		stack->prev = new;
	}

	stack = new;
}

#include "monty.h"

/**
 * stack_free - frees a doubly linked list
 * @h: head of the stack
 */
void stack_free(stack_t *h)
{
	stack_t *aux;

	aux = h;
	while (h)
	{
		aux = h->next;
		free(h);
		h = aux;
	}
}

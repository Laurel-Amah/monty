#include "monty.h"
/**
 * stack_free - frees a stack
 * @h: head of stack
 * Return: nothing
 */
void stack_free(stack_t *h)
{
	stack_t *auxiliary;

	auxiliary = h;
	while (h)
	{
		auxiliary = h->next;
		free(h);
		h = auxiliary;
	}
}

#include "monty.h"
/**
 * pall - function prints all element in a stack
 */
void pall(void)
{
	stack_t *current = stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

#include "monty.h"

/**
 *f_sub- sustration
 *@heads: stack head
 *@count: line_number
 *Return: no return
 */
void f_sub(stack_t **heads, unsigned int count)
{
	stack_t *aux;
	int sus, nodes;

	aux = *heads;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	aux = *heads;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*heads = aux->next;
	free(aux);
}



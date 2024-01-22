#include "monty.h"

/**
 * f_swap - adds the top two elements of the stack.
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_swap(stack_t **heads, unsigned int count)
{
	stack_t *w;
	int len = 0, aux;

	w = *heads;
	while (w)
	{
		w = w->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	w = *heads;
	aux = w->n;
	w->n = w->next->n;
	w->next->n = aux;
}

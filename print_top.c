#include "monty.h"

/**
 * f_pop - prints the top
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_pop(stack_t **heads, unsigned int count)
{
	stack_t *w;

	if (*heads == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	w = *heads;
	*heads = w->next;
	free(w);
}

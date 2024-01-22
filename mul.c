#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_mul(stack_t **heads, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *heads;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	h = *heads;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*heads = h->next;
	free(h);
}

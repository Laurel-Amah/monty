#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_mod(stack_t **heads, unsigned int count)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	h = *heads;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*heads = h->next;
	free(h);
}



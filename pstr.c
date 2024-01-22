#include "monty.h"
/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_pstr(stack_t **heads, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *heads;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}

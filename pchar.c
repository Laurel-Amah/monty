#include "monty.h"

/**
 * f_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_pchar(stack_t **heads, unsigned int count)
{
	stack_t *w;

	w = *heads;
	if (!w)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	if (w->n > 127 || w->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", w->n);
}



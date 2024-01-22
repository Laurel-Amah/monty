#include "monty.h"

/**
 * f_pint - prints the top
 * @heads: stack head
 * @count: line_number
 * Return: no return
 */
void f_pint(stack_t **heads, unsigned int count)
{
	if (*heads == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*heads);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*heads)->n);
}

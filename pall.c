#include "monty.h"
/**
 * f_pall - prints all the values on the stack,
 * starting from the top of the stack.
 * @head: head of the stack
 * @stack_counter: use as a counter
 * Return: nothing
 */
void f_pall(stack_t **head, unsigned int stack_counter)
{
	stack_t *v;

	(void)stack_counter;

	v = *head;
	if (v == NULL)
	{
		return;
	}
	while (v)
	{
		printf("%d\n", v->n);
		v = v->next;
	}
}

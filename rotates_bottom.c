#include "monty.h"

/**
 *f_rotr- rotates the stack to the bottom
 *@heads: stack head
 *@count: line_number
 *Return: no return
 */
void f_rotr(stack_t **heads, __attribute__((unused)) unsigned int count)
{
	stack_t *copy;

	copy = *heads;
	if (*heads == NULL || (*heads)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *heads;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*heads)->prev = copy;
	(*heads) = copy;
}

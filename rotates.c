#include "monty.h"
/**
 *f_rotl- rotates the stack to the top
 *@heads: stack head
 *@count: line_number
 *Return: no return
 */
void f_rotl(stack_t **heads,  __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *heads, *aux;

	if (*heads == NULL || (*heads)->next == NULL)
	{
		return;
	}
	aux = (*heads)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *heads;
	(*heads)->next = NULL;
	(*heads)->prev = tmp;
	(*heads) = aux;
}

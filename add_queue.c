#include "monty.h"
/**
 * add_queue - adds node to the tail of the stack
 * @a: value
 * @h: head of stack
 * Return: nothing
 */
void add_queue(stack_t **h, int a)
{
	stack_t *new_node, *auxiliary;

	auxiliary = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = a;
	new_node->next = NULL;
	if (auxiliary)
	{
		while (auxiliary->next)
		{
			auxiliary = auxiliary->next;
		}
	}
	if (!auxiliary)
	{
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		auxiliary->next = new_node;
		new_node->prev = auxiliary;
	}
}

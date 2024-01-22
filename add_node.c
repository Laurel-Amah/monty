#include "monty.h"
/**
 * add_node - function adds node to the head of a stack
 * @h: head of stack
 * @u: new value to be added
 * Return: nothing
 */
void add_node(stack_t **h, int u)
{
	stack_t *new_node, *auxiliary;

	auxiliary = *h;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxiliary)
	{
		auxiliary->prev = new_node;
	}
	new_node->n = u;
	new_node->next = *h;
	new_node->prev = NULL;
	*h = new_node;
}

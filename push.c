#include "monty.h"
/**
 * f_push - push an element to a stack
 * @head: stack head
 * @count: counter
 * Return: nothing
 */
void f_push(stack_t **head, unsigned int count)
{
	int a, b = 0, flag = 0;

	if (Bus.Arg)
	{
		if (Bus.Arg[0] == '-')
		{
			b++;
		}
		for (; Bus.Arg[b] != '\0'; b++)
		{
			if (Bus.Arg[b] > 57 || Bus.Arg[b] < 48)
				flag = 1;
		}
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push interger\n", count);
			fclose(Bus.stream);
			free(Bus.holder);
			stack_free(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push interger\n", count);
		fclose(Bus.stream);
		free(Bus.holder);
		stack_free(*head);
		exit(EXIT_FAILURE); }
	a = atoi(Bus.Arg);
	if (Bus.line == 0)
	{
		add_node(head, a);
	}
	else
	{
		add_queue(head, a);
	}
}

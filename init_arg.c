#include "monty.h"
/**
 * init_arg - for initializing a pointer to args
 * structure.
 * Return: NOthing
 */
void init_arg(void)
{
	arguments = malloc(sizeof(argt));
	if (arguments == NULL)
	{
		failed_malloc();
	}
	arguments->stream = NULL;
	arguments->lineptr = NULL;
}

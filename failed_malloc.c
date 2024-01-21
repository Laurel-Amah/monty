#include "monty.h"
/**
 * failed_malloc - handles errors when malloc fails
 * Return: Nothing
 */
void failed_malloc(void)
{
	dprintf(stderr, "Error: malloc failed\n");
	exit(EXIT_FAILURE);
}

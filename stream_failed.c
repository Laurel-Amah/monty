#include <stdio.h>
#include "monty.h"
/**
 * stream_failed - handles error when a 
 * stream fails
 * @file_name: name of file that failed to open
 * Return: Nothing
 */
void stream_failed(char *file_name)
{
	dprintf(stderr, "Error: can't open file %s\n", file_name);
	exit(EXIT_FAILURE);
}

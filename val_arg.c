#include "monty.h"
/**
 * val_arg - checks number of command line args
 * ac: command line arguments
 * Return: returns nothing
 */
void val_arg(int ac)
{
	if (ac == 2)
	{
		return;
	}
	dprintf(stderr,"USAGE:monty file\n");
	exit(EXIT_FAILURE);
}

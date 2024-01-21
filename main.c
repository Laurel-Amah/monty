#include "monty.h"
/**
 * main - main entry point
 * @av: argument vector
 * @ac: argument count
 * Return: 0 meaning success
 */
int main(int ac, char **av)
{
	size_t x = 0;

	val_arg(ac);
	init_arg();
	getting_stream(av[1]);

	while (getline(&arguments->lineptr, &x, arguments->stream) != -1)
	{
		printf("%s", arguments->lineptr);
	}
	return (0);
}

#include "monty.h"
#include <stdio.h>
/**
 * getting_stream - gets the stream for reading
 * @file_name: name of file
 * Return: Nothing
 */
void getting_stream(char *file_name)
{
	int fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		stream_failed(file_name);
	}
	arguments->stream = fdopen(fd, "r");
	{
		close(fd);
		stream_failed(file_name);
	}
}

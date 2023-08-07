#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *Allocated_buffer(char *files);
void close_file(int filedescription);

/**
 * Allocated_buffer - a Function that Allocates 1024 bytes for a buffer.
 * Function takes one argument: the name of the file that.
 * The buffer will be storing characters for.
 * @files: The name of the file buffer
 * If the buffer cannot be allocated, the function prints an error message
 * And exits with code 99.
 * Return: Newly-allocated buffer.
 */

char *Allocated_buffer(char *files)
{
char *buffer_allocated;

buffer_allocated = malloc(sizeof(char) * 1024);

if (buffer_allocated == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", files);
exit(99);
}

return (buffer_allocated);
}

/**
 * Close_file - The function takes one argument file descriptor to be closed.
 * The variable closed will be used to store the
 * Return value of the close() function.
 * @filedescription: The file descriptor to closed.
 */
void Close_file(int filedescription)
{
int clo;

clo = close(filedescription);

if (clo == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fdtion %d\n", filedescription);
exit(100);
}
}
/**
 * main - C Function that Copies the contents of a file to another file.
 * @argc: A number of argument
 * The program takes two arguments: the name of the file to copy from
 * And the name of the file to copy to.
 * @argv: THE array of pointers.
 * Return: The program returns 0 on success.
 */

int main(int argc, char *argv[])
{
	int from;
	int to;
	int re;
	int wri;
	char *bufferstro;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bufferstro = Allocated_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	re = read(from, bufferstro, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || re == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bufferstro);
			exit(98);
		}

		wri = write(to, bufferstro, re);
		if (to == -1 || wri == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bufferstro);
			exit(99);
		}

		re = read(from, bufferstro, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (re > 0);

	free(bufferstro);
	close_file(from);
	close_file(to);

	return (0);
}

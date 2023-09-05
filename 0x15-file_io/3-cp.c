#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates a buffer
 * to store characters for file operations.
 * @file_havu: The name of the file
 * for which the buffer is being created.
 *
 * This function dynamically allocates memory
 * for a buffer that can store characters
 * to be used in file operations related to the specified file.
 * The buffer is sized
 * to hold up to 1024 bytes.
 *
 * Return: A pointer to the newly-allocated buffer,
 * or NULL on failure.
 */

char *create_buffer(char *file_havu)
{
	char *buuffer;

	buuffer = malloc(sizeof(char) * 1024);

	if (buuffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_havu);
		exit(99);
	}

	return (buuffer);
}

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to be closed.
 *
 * This function is responsible for closing a
 * file descriptor specified by the 'fd' parameter.
 * File descriptors used to manage open files in a program.
 * When a file is no longer
 * needed or when you want to free up system resources,
 * you should close the associated
 * file descriptor.
 *
 * @fd: The file descriptor to be closed.
 * It is an integer representing an open file or
 * resource managed by the operating system.
 *
 * Return: This function does not return any value (void).
 * The primary purpose of this
 * Note: Failing to close a file descriptor can lead
 * to resource leaks in your program,
 * potentially causing it to run out of
 * available file descriptors or memory.
 * Therefore, it's essential to use this function
 * when you're done with a file or
 * resource to free up system resources and
 * maintain proper program behavior.
 */

void close_file(int fd)
{
	int chu;

	chu = close(fd);

	if (chu == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or
 * cannot be read - exit code 98.
 * If file_to cannot be created or
 * written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int frm, too, rrr, www;
	char *buuffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buuffer = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rrr = read(frm, buuffer, 1024);
	too = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rrr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buuffer);
			exit(98);
		}

		www = write(too, buuffer, rrr);
		if (too == -1 || www == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buuffer);
			exit(99);
		}

		rrr = read(frm, buuffer, 1024);
		too = open(argv[2], O_WRONLY | O_APPEND);

	} while (rrr > 0);

	free(buuffer);
	close_file(frm);
	close_file(too);

	return (0);
}

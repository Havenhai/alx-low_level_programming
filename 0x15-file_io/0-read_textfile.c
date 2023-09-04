#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read a text file and print its content to STDOUT in chunks.
 * @filename: The name of the text file being read.
 * @chunk_size: The size of each chunk (in bytes) to be read and printed.
 * Return: The total number of bytes read and printed, or
 *         -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t chunk_size)
{
	char *buffer = NULL;
	ssize_t total_bytes_read = 0;
	ssize_t bytes_read = 0;
	int file_descriptor = -1;

	if (filename == NULL)
	return (-1);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
	perror("Error opening file");
	return (-1);
	}
buffer = malloc(sizeof(char) * (chunk_size + 1));
	if (buffer == NULL)
	{
	perror("Error allocating memory");
	close(file_descriptor);
	return (-1);
	}
while ((bytes_read = read(file_descriptor, buffer, chunk_size)) > 0)
{
	buffer[bytes_read] = '\0'; /* Null-terminate the buffer*/
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1)
	{
	perror("Error writing to STDOUT");
	free(buffer);
	close(file_descriptor);
	return (-1);
	}
	total_bytes_read += bytes_read;
	}
	if (bytes_read == -1)
	perror("Error reading file");
	free(buffer);
	close(file_descriptor);
	return (-1);
	}
	free(buffer);
	close(file_descriptor);
	return (total_bytes_read);
}

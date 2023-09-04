#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - Read a text file and
 * print its content to STDOUT in chunks.
 * @filename: The name of the text file being read.
 * @chunk_size: The size of each chunk (in bytes)
 * to be read and printed.
 * Return: The total number of bytes read and printed, or
 *         -1 on failure.
 */
ssize_t read_textfile(const char *filename, size_t chunk_size)
{
	char *buffer_havu;
	ssize_t total_bytes_read;
	ssize_t bytes_written_havu;
	ssize_t file_havu_descriptor;

	file_havu_descriptor = open(filename, O_RDONLY);
	if (file_havu_descriptor == -1)
		return (0);
	buffer_havu = malloc(sizeof(char) * chunk_size);
	total_bytes_read = read(file_havu_descriptor, buffer_havu, chunk_size);
	bytes_written_havu = write(STDOUT_FILENO, buffer_havu, total_bytes_read);

	free(buffer_havu);
	close(file_havu_descriptor);
	return (bytes_written_havu);
}

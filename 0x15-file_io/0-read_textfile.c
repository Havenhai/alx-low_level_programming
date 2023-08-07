#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that reads a text file and
 * prints its contents to standard output.
 * The function takes two arguments: the name of the text file to be read
 * and the number of letters to be read.
 * @filename: Text file being read.
 * @letters: Number of letters to be read in bytes.
 * Return: Actual number of bytes read and printed(w)
 * 0 When function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufer_content;
	ssize_t filedescription;
	ssize_t num_byte_print;
	ssize_t num_byte;

	filedescription = open(filename, O_RDONLY);
	if (filedescription == -1)
		return (0);
	bufer_content = malloc(sizeof(char) * letters);
	num_byte = read(filedescription, bufer_content, letters);
	num_byte_print = write(STDOUT_FILENO, bufer_content, num_byte);

	free(bufer_content);
	close(filedescription);
	return (num_byte_print);
}

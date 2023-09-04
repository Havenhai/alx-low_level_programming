#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_buffer - Allocates a 1024-byte buffer for
 * copying characters between files.
 *
 * This function dynamically allocates
 * memory for a buffer that will be used to read
 * and write characters when copying from one file to another.
 *
 * @destination_file: The name of the destination file
 * where characters are stored.
 * Return: A pointer to the newly-allocated buffer.
 * If memory allocation fails, the function prints
 * an error message to the standard error
 * stream (STDERR_FILENO) and exits with a status code of 99.
 */
char *allocate_buffer(char *destination_file)
{
char *copy_buffer;

copy_buffer = malloc(sizeof(char) * 1024);

if (copy_buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Unable to allocate memory for writing to %s\n", destination_file);
exit(99);
}

return (copy_buffer);
}

/**
 * close_file_descriptor - Closes a file descriptor.
 *
 * This function closes a given file descriptor
 * and checks for any errors during the
 * closing process.
 *
 * @fd: The file descriptor to be closed.
 * Return: 0 on success
 * If the file descriptor cannot be closed successfully,
 * the function prints an error
 * message to the standard error stream (STDERR_FILENO)
 * and exits with a status code of 100.
 */
void close_file_descriptor(int fd)
{
int close_result;

close_result = close(fd);

if (close_result == -1)
{
dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd);
exit(100);
}
}

/**
 * main - Copies the contents of one file to another file.
 *
 * This is the main function of the program,
 * responsible for copying the contents of one
 * source file to another destination file.
 * It handles command line arguments, file I/O,
 * and error handling.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the program's arguments.
 *
 * Return: 0 on success.
 *
 * If the argument count is incorrect,
 * the function prints a usage message to the standard
 * error stream and exits with a status code of 97.
 * If the source file does not exist or cannot be read,
 * it prints an error message and exits
 * with a status code of 98.
 * If the destination file cannot be created or written to,
 * it prints an error message and exits
 * with a status code of 99.
 * If there are errors during file operations,
 * it prints appropriate error messages and exits
 * with a status code of 100.
 */
int main(int argc, char *argv[])
{
int source_fd, destination_fd, read_result, write_result;
char *copy_buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
exit(97);
}

copy_buffer = allocate_buffer(argv[2]);
source_fd = open(argv[1], O_RDONLY);
read_result = read(source_fd, copy_buffer, 1024);
destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

do {
if (source_fd == -1 || read_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(copy_buffer);
exit(98);
}

write_result = write(destination_fd, copy_buffer, read_result);
if (destination_fd == -1 || write_result == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(copy_buffer);
exit(99);
}

read_result = read(source_fd, copy_buffer, 1024);
destination_fd = open(argv[2], O_WRONLY | O_APPEND);

} while (read_result > 0);
free(copy_buffer);
close_file_descriptor(source_fd);
close_file_descriptor(destination_fd);
return (0);
}

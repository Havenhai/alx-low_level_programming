#include "main.h"

/**
 * create_file - Creates a new file and writes content into it.
 * @target_filename: A pointer to the name of the file to be created.
 * @file_content: A pointer to string containing data to write file.
 *
 * Return: If the function fails - returns -1.
 *         Otherwise - returns 1.
 */
int create_file(const char *target_filename, char *file_content)
{
	int file_descriptor, write_result, content_length = 0;

	if (target_filename == NULL)
	return (-1);

if (file_content != NULL)
	{
/*Calculate the length of the file content*/
for (content_length = 0; file_content[content_length];)
content_length++;
}
/* Open or create the target file with read and write permissions*/
file_descriptor = open(target_filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

/*Write the file content to the file*/
write_result = write(file_descriptor, file_content, content_length);

/* Check for errors in file creation or content writing*/
if (file_descriptor == -1 || write_result == -1)
return (-1);

/*Close the file descriptor*/
close(file_descriptor);

/* Return 1 to indicate success*/
return (1);
}

#include "main.h"

/**
 * append_text_to_file -function that Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * The function first checks if the filename is NULL.
 * If the filename is NULL, the function returns -1
 * @text_content: The string to add to the end of the file.
 * If the filename is not NULL,
 * the function then opens the file in append mode
 * Return: If the function fail or filename is NULLs 1.
 * If the file does not exist the user lacks write permissions - -1.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int output, wro, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	output = open(filename, O_WRONLY | O_APPEND);
	wro = write(output, text_content, leng);

	if (output == -1 || wro == -1)
		return (-1);

	close(output);

	return (1);
}

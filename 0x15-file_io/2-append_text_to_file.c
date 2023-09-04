#include "main.h"

/**
 * append_text_to_file - havu function appends text at the end of a file.
 * This function appends the provided text to the end of the specified file.
 *
 * @filename: A pointer to the name of the file to
 * which the text will be appended.
 * @text_content: A pointer to the string of text that will be
 * added to the end of the file.
 *
 * Return: If the function fails due to an invalid filename
 * or if filename is NULL, it returns -1.
 * If file does not exist or the user lacks write permissions, returns -1.
 * If the text_content is NULL or the write operation fails, it returns -1.
 * If the text is successfully appended to the file, it returns 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, wwrite_result, len_txt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len_txt = 0; text_content[len_txt];)
			len_txt++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	wwrite_result = write(file_descriptor, text_content, len_txt);

	if (file_descriptor == -1 || wwrite_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}

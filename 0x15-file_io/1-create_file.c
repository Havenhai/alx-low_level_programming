#include "main.h"

/**
 * create_file - Function that creates a file and writes a String to it.
 * The function takes two arguments: the name of the file to create
 * and the string to write to the file
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If either of them is NULL, the function returns -1.
 * If the filename and the text content are not NULL,
 * The function then opens the file in write-only mode
 */

int create_file(const char *filename, char *text_content)
{
	int filedescription, w, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	filedescription = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(filedescription, text_content, leng);

	if (filedescription == -1 || w == -1)
		return (-1);

	close(filedescription);

	return (1);
}

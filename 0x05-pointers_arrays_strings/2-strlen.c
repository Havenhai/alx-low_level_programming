#include "main.h"

/**
 * _strlen - strlen is a standard library function in C programming languages.
 * that returns the length of a null-terminated string.
 * which is the number of characters in the string up to
 * but not including the terminating null character.
 * @string: the string that get the length.
 * Return: length
 */

int _strlen(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		length++;
		string++;
	}

	return (length);
}

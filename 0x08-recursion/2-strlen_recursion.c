#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @stri: The string to be measured.
 * Return: The length of the string(value).
 */

int _strlen_recursion(char *stri)
{
	int length = 0;

	if (*stri)
	{
		length++;
		length += _strlen_recursion(stri + 1);
	}

	return (length);
}

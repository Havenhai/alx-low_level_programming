#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line;
 * @stri: input string
 * Return: Always 0 (Success)
 */

void _puts_recursion(char *stri)
{
	if (*stri)
	{
		_putchar(*stri);
		_puts_recursion(stri + 1);
	}

	else
		_putchar('\n');
}

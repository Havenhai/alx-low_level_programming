#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @stri: string to print
 */
void _puts(char *stri)
{
	while (*stri != '\0')
	{
		_putchar(*stri++);
	}
		_putchar('\n');
}

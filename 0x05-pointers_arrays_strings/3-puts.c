#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 *
 * @haven: The string to print
 *
 * Return: void
 */
void _puts(char *haven)
{
	while (*haven != '\0')
	{
		_putchar(*haven++);
	}
		_putchar('\n');
}

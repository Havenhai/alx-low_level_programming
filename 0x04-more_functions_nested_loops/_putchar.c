#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @h: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */

int _putchar(char h)
{
	return (write(1, &h, 1));
}

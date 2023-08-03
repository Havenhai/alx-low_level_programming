#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout.
 * @hav: The character to print.
 * Return: On success 1.
 * -1 is returned on error and errno is set appropriately.
 */
int _putchar(char hav)
{
	return (write(1, &hav, 1));
}

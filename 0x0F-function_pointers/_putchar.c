#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @hh: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char hh)
{
	return (write(1, &hh, 1));
}

#include <unistd.h>

/**
 * _putchar - Writes characters hav to stdout
 * @hav: The character to print
 *
 * Return: 1.
 * On error, -1 is returned.
 */
int _putchar(char hav)
{
	return (write(1, &hav, 1));
}

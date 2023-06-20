#include <unistd.h>

/**
 * _putchar - write the character to stdout
 * @h: The character to print
 * Return: On success 1.
 */
int _putchar(char h)

{
	return (write(1, &h, 1));
}

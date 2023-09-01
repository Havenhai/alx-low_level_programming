#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write a character to the standard output.
 * @character: The character to be written.
 *
 * This function takes a single character
 * 'character' as a parameter and
 * utilizes the 'write' system call to write
 * the character to the standard output.
 * The function returns the number of bytes
 * written on success, and in case of an
 * error, it returns -1 and sets 'errno'
 * to indicate the specific error that occurred.
 *
 * @character: The character to write the standard output.
 * Return: The number of bytes written on success,
 * or -1 on error.
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}

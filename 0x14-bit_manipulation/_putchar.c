#include "main.h"
#include <unistd.h>

/**
 * custom_putchar - Write a character to the standard output.
 * @output_character: The character to be written.
 *
 * This function takes a single character
 * 'output_character' as a parameter and
 * utilizes the 'write' system call to write
 * the character to the standard output.
 * The function returns the number of bytes
 * written on success, and in case of an
 * error, it returns -1 and sets 'errno'
 * to indicate the specific error that occurred.
 *
 * @output_character: The character to write the standard output.
 * Return: The number of bytes written on success,
 * or -1 on error.
 */
int custom_putchar(char output_character)
{
	return (write(1, &output_character, 1));
}

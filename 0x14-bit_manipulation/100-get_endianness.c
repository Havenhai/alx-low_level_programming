#include "main.h"

/**
 * get_endianness - C function that checks the endianness of a machine
 * Endianness refers to the byte order in memory representation
 * Of multi-byte data types.
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int lop = 1;
	char *endia = (char *) &lop;

	return (*endia);
}

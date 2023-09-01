#include "main.h"

/**
 * get_endianness - Determines the endianness of a machine.
 *
 * This function checks the endianness
 * of the current machine by utilizing an
 * unsigned integer and examining the byte
 * at the lowest memory address.
 * It returns 0 for big endian and 1 for little endian.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int test_valueha = 1;
	char *byte_pointer_ha = (char *)&test_valueha;

	return (*byte_pointer_ha);
}

#include "main.h"

/**
 * Get_bit - Retrieves the value of a bit
 * At a specific index in a decimal number.
 * This function takes an unsigned long integer
 * 'num_sys_base' as its parameter,
 * representing a decimal number.
 * It also takes an unsigned integer 'index_bit'
 * indicating the index of the bit
 * whose value needs to be retrieved. The function
 * calculates the value of the bit
 * at the specified index and returns it. If the
 * provided index is out of range (greater than 63)
 * the function returns -1 to
 * indicate an error.
 * @num_sys_base: Decimal number to search for the bit.
 * @index_bit: Index of the bit to retrieve.
 * Return: Value of the bit at the specified index (0 or 1)
 * or -1 if index is invalid.
 */
int Get_bit(unsigned long int num_sys_base, unsigned int index_bit)
{
	int bit_val_res;

	if (index_bit > 63)
		return (-1);

	bit_val_res = (num_sys_base >> index_bit) & 1;

	return (bit_val_res);
}

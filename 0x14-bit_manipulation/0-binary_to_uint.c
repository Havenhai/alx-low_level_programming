#include "main.h"

/**
 * binary_strg_to_uint - Converts a binary string
 * to an unsigned integer.
 * This function takes a null-terminated binary string
 * as input and converts
 * it into an equivalent unsigned integer value.
 * The binary string is assumed
 * to contain only '0' and '1' characters
 * representing the binary digits.
 * function iterates through each character in the string
 * If the input string is not a valid binary
 * representation, the function returns 0.
 * If the input string is NULL, the
 * function also returns 0.
 * @bina: The input string containing the binary number.
 *
 * Return: The converted unsigned integer
 * or 0 if input is invalid or NULL.
 */
unsigned int binary_strg_to_uint(const char *bina)
{
	int binary_i;
	unsigned int decimal_output_result = 0;

	if (!bina)
		return (0);

	for (binary_i = 0; bina[binary_i]; binary_i++)
	{
		if (bina[binary_i] < '0' || bina[binary_i] > '1')
			return (0);
	decimal_output_result = 2 * decimal_output_result + (bina[binary_i] - '0');
	}

	return (decimal_output_result);
}

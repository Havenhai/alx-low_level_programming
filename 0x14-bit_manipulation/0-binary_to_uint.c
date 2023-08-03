#include "main.h"

/**
 * binary_to_uint - Function converts Binary number to Unsigned int
 * @hav: Pointer string containing the binary number.
 * Return: the converted number.
 * or 0 if
 * There is chars in the string hav that is not 0 or 1
 * or if hav is NULL
 */
unsigned int binary_to_uint(const char *hav)
{
	int hyz;
	unsigned int decimal_val = 0;

	if (!hav)
		return (0);

	for (hyz = 0; hav[hyz]; hyz++)
	{
		if (hav[hyz] < '0' || hav[hyz] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (hav[hyz] - '0');
	}

	return (decimal_val);
}

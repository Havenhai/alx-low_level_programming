#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9
 *
 * @z: a number to be checked
 *
 * Return: 1 if z is a digit or 0 otherwise
 */

int _isdigit(int z)

{
	if (z >= '0' && z <= '9')
		return (1);
	else
		return (0);
}


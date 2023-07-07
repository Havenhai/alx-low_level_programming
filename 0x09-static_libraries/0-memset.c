#include "main.h"

/**
 * _memset - fill a block of memory with a specific value
 * @z: starting address of memory to be filled
 * @x: the desired value
 * @y: number of bytes to be changed
 * Return: z with new value for y bytes
 */

char *_memset(char *z, char x, unsigned int y)
{
	int m = 0;

	for (; y > 0; m++)
	{
		z[m] = x;
		y--;
	}
	return (z);
}


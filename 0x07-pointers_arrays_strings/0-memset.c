#include "main.h"

/**
 * _memset - function that fill block of memory with specific value
 * @h: starting address of memory to be filled
 * @t: the desired value
 * assigns the value to each byte in the memory area pointed to by h.
 * @y: number of bytes to be changed
 * Return: changed array with new value for n bytes
 */

char *_memset(char *h, char t, unsigned int y)
{
	int j = 0;

	for (; y > 0; j++)
	{
		h[j] = t;
		y--;
	}
	return (h);
}

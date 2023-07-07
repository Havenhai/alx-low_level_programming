#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@z: number of bytes
 *Return: copied memory with z byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int z)
{
	int ri = 0;
	int ii = z;

	for (; ri < ii; ri++)
	{
		dest[ri] = src[ri];
		z--;
	}
	return (dest);
}

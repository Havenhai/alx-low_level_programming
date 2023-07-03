#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored(input)
 *@src: memory where is copied(input)
 *@n: number of bytes
 *Return: copied memory with n bytes changed to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	int iteration = 0;
	int i = n;

	for (; iteration < i; iteration++)
	{
		dest[iteration] = src[iteration];
		n--;
	}
	return (dest);
}

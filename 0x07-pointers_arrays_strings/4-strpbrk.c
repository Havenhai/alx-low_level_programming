#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @h: input
 * @accept: input
 * Return: pointer to the byte in h that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *h, char *accept)

{
		int y;

		while (*h)
		{
			for (y = 0; accept[y]; y++)
			{
				if (*h == accept[y])
					return (h);
					}
				h++;
			}

	return ('\0');
}

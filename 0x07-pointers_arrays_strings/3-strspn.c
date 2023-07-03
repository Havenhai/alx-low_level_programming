#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @ha: input
 * @accept: input
 * Return: Returns the number of bytes in the initial segment of ha
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *ha, char *accept)
{
	unsigned int nu = 0;
	int y;

	while (*ha)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*ha == accept[y])
			{
				nu++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (nu);
		}
		ha++;
	}
	return (nu);
}

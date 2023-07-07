#include "main.h"
/**
 * _strspn - Entry point
 * @zz: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *zz, char *accept)
{
	unsigned int m = 0;
	int t;

	while (*zz)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*zz == accept[t])
			{
				m++;
				break;
			}
			else if (accept[t + 1] == '\0')
				return (m);
		}
		zz++;
	}
	return (m);
}

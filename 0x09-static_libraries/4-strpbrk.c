#include "main.h"
/**
 * _strpbrk - Entry point
 * @zz: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *zz, char *accept)
{
	int j;

	while (*zz)
	{
		for (j = 0; accept[j]; j++)
		{
		if (*zz == accept[j])
		return (zz);
		}
	zz++;
	}

return ('\0');
}

#include "main.h"
/**
 * _strstr - Entry point
 * @haystackk: input
 * @needlee: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystackk, char *needlee)
{
	for (; *haystackk != '\0'; haystackk++)
	{
		char *y = haystackk;
		char *z = needlee;

		while (*y == *z && *z != '\0')
		{
			y++;
			z++;
		}

		if (*z == '\0')
			return (haystackk);
	}

	return (0);
}

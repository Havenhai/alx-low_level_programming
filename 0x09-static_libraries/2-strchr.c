#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @z: input
 * @y: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *z, char y)
{
	int j = 0;

	for (; z[j] >= '\0'; j++)
	{
		if (z[j] == y)
			return (&z[j]);
	}
	return (0);
}

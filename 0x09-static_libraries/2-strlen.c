#include "main.h"
/**
 * _strlen - returns the length of a string
 * @z: string
 * Return: length
 */
int _strlen(char *z)
{
	int longi = 0;

	while (*z != '\0')
	{
		longi++;
		z++;
	}

	return (longi);
}

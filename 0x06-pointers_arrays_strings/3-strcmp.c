#include "main.h"

/**
 * _strcmp - compare string values
 * @hav: pointer to first string.
 * @ha: pointer to second string.
 * Return: hav[h] - ha[h]. value 0 if string is less than other
 */

int _strcmp(char *hav, char *ha)
{
	int h;
	int comval;

	h = 0;
	while (hav[h] != '\0' && ha[h] != '\0')
	{
	if (hav[h] != ha[h])
	{
	comval = hav[h] - ha[h];
	}
	h++;
	}
	return (comval);
}

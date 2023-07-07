#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @zz: the string to use.
 * Return: integer.
 */

int _atoi(char *zz)
{
	int signn = 1, j = 0;
	unsigned int ress = 0;

	while (!(zz[j] <= '9' && zz[j] >= '0') && zz[j] != '\0')
	{
		if (zz[j] == '-')
			signn *= -1;
		j++;
	}
	while (zz[j] <= '9' && (zz[j] >= '0' && zz[j] != '\0'))
	{
		ress = (ress * 10) + (zz[j] - '0');
		j++;
	}
	ress *= signn;
	return (ress);
}

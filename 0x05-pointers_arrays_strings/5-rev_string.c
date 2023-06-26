#include "main.h"

/**
 * rev_string - Reverses a string
 *
 * @ha: The Input string to be modified
 *
 * Return: String in reverse
 */

void rev_string(char *ha)

{
	char rev = ha[0];
	int cou = 0;
	int index;

	while (ha[cou] != '\0')
	cou++;
	for (index = 0; index < cou; index++)
	{
		cou--;
		rev = ha[index];
		ha[index] = ha[cou];
		ha[cou] = rev;
	}
}

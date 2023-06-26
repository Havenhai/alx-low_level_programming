#include "main.h"

/**
 * _atoi - converts a string to an integer
 * Number in the string preceded by an infinite number of characters
 * If there are no numbers in the string, the function return 0
 * @h: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *h)
{
	int a, b, c, e, f, digit;

	a = 0;
	b = 0;
	c = 0;
	e = 0;
	f = 0;
	digit = 0;

	while (h[e] != '\0')
		e++;

	while (a < e && f == 0)
	{
		if (h[a] == '-')
			++b;

		if (h[a] >= '0' && h[a] <= '9')
		{
			digit = h[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			f = 1;
			if (h[a + 1] < '0' || h[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}

	if (f == 0)
		return (0);

	return (c);
}

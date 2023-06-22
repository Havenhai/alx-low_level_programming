#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14.
 * followed by a new line.
 */

void more_numbers(void)
{
	int itr, num;

	for (itr = 1; itr <= 10; itr++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar('1');
			_putchar (num % 10 + '0');
		}
		_putchar('\n');
	}
}

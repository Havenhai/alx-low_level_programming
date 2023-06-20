#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase.
 * Return:void
 */

void print_alphabet_x10(void)
{
        char loweralphabet;
	int t;
	t = 0;
	while (t < 10)
	{
        for (loweralphabet = 'a'; loweralphabet <= 'z'; loweralphabet++)
	{
	_putchar(loweralphabet);
	}
        _putchar('\n');
	t++;
	}
}

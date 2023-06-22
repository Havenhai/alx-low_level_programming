#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char z;

	z = '0';
	printf("%c: %d\n", z, _isdigit(z));
	z = 'a';
	 printf("%c: %d\n", z, _isdigit(z));
    return (0);
}

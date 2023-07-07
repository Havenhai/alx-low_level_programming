#include "main.h"

/**
 * _isupper - print uppercase letters
 * @h: char to check
 * Return: 0 or 1
 */

int _isupper(int h)
{
	if (h >= 'A' && h <= 'Z')
		return (1);
	else
		return (0);
}

#include "main.h"

int square_root(int h, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @h: input number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int h)
{
	if (h < 0)
		return (-1);
	return (square_root(h, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @h: number to calculate the sqaure root of
 * @y: iterator
 * Return: the resulting square root
 */

int square_root(int h, int y)
{
	int square = y * y;

	if (square > h)
		return (-1);
	if (square == h)
		return (y);
	return (square_root(h, y + 1));
}

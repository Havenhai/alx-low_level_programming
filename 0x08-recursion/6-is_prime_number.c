#include "main.h"

int prime(int h, int y);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @h: number to evaluate
 * a function that returns 1 if the input integer is a prime number
 * otherwise return 0.
 * Return: 1 if h is a prime number, 0 if not
 */

int is_prime_number(int h)
{
	if (h <= 1)
		return (0);
	return (prime(h, h - 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @h: number to evaluate
 * @y: iterator
 * Return: 1 if h is prime, 0 if not
 */

int prime(int h, int y)
{
	if (y == 1)
		return (1);
	if (h % y == 0 && y > 0)
		return (0);
	return (prime(h, y - 1));
}

#include "main.h"

/**
 * _pow_recursion - Function that returns the value h raised to power of t
 * @h: value to raise
 * @t: power
 * If y is lower than 0, the function should return -1
 * Return: result of the power
 */

int _pow_recursion(int h, int t)
{
	if (t < 0)
		return (-1);
	if (t == 0)
		return (1);
	return (h * _pow_recursion(h, t - 1));
}

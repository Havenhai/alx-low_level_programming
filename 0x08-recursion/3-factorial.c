#include "main.h"

/**
 * factorial - function that returns the factorial of a number
 * @num: number to return the factorial from
 * Return: factorial of num(integer value)
 * If num is lower than 0 function should return -1, indicate an error
 * Factorial of 0 is 1
 */

int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

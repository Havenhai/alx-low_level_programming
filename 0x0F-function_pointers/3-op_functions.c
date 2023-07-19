#include "3-calc.h"

int op_add(int h, int i);
int op_sub(int h, int i);
int op_mul(int h, int i);
int op_div(int h, int i);
int op_mod(int h, int i);

/**
 * op_add - Returns the sum of two numbers.
 * @h: The first number.
 * @i: The second number.
 * Return: The sum of h and i.
 */
int op_add(int h, int i)
{
	return (h + i);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @h: The first number.
 * @i: The second number.
 * Return: The difference of h and i.
 */
int op_sub(int h, int i)
{
	return (h - i);
}
/**
 * op_mul - Returns the product of two numbers.
 * @h: The first number.
 * @i: The second number.
 * Return: The product of h and i.
 */
int op_mul(int h, int i)
{
	return (h * i);
}
/**
 * op_div - Returns the division of two numbers.
 * @h: The first number.
 * @i: The second number.
 * Return: The quotient of h and i.
 */
int op_div(int h, int i)
{
	return (h / i);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @h: The first number.
 * @i: The second number.
 * Return: The remainder of the division of h by i.
 */
int op_mod(int h, int i)
{
	return (h % i);
}

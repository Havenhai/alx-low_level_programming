#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that calculate the sum of all its parameters.
 * @hh: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If hh == 0 - 0.
 *         Otherwise - the sum of all parameters.
 * If hh == 0, return 0
 */

int sum_them_all(const unsigned int hh, ...)
{
	va_list list;
	unsigned int y;
	int sum = 0;

	va_start(list, hh);

	for (y = 0; y < hh; y++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}

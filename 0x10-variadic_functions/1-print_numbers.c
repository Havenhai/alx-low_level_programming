#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers given as parameters
 * followed by a new line.
 * @separator: The string to be printed between numbers.
 * @hh: The number of arguments passed to the function.
 * @...: A variable number of numbers to be printed.
 * If separator is NULL, don’t print it
 */

void print_numbers(const char *separator, const unsigned int hh, ...)
{
	va_list nums;
	unsigned int index;

	va_start(nums, hh);

	for (index = 0; index < hh; index++)
	{
		printf("%d", va_arg(nums, int));

		if (index != (hh - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}

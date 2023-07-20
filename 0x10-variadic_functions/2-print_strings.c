#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @hh: The number of strings passed to the function.
 * @...: A variable number of strings to be printed.
 * If separator is NULL, it is not printed.
 * If one of the strings if NULL, (nil) is printed instead.
 */

void print_strings(const char *separator, const unsigned int hh, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, hh);

	for (index = 0; index < hh; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (hh - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}

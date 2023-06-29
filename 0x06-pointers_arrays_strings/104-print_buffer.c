#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @buf: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *buf, int size)
{
	int h, t, y;

	h = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (h < size)
	{
		t = size - h < 10 ? size - h : 10;
		printf("%08x: ", h);
		for (y = 0; y < 10; y++)
		{
			if (y < t)
				printf("%02x", *(buf + h + y));
			else
				printf("  ");
			if (y % 2)
			{
				printf(" ");
			}
		}
		for (y = 0; y < t; y++)
		{
			int c = *(buf + h + y);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		h += 10;
	}
}

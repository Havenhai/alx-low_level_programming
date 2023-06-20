#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @Z: The number to start printing from
 * Return: Always 0.
 */

void print_to_98(int Z)
{
	if (Z <= 98)
	{
	for (; Z <= 98; Z++)
	{
	if (Z == 98)
	{
	printf("%d", Z);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", Z);
	}
	}
	}
	else
	{
	for (; Z >= 98; Z--)
	{
	if (Z == 98)
	{
	printf("%d", Z);
	printf("\n");
	break;
	}
	else
	{
	printf("%d,", Z);
	}
	}
	}
}

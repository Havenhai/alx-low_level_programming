#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string using rot13
 * @str: pointer to string params
 * Return: *str
 */

char *rot13(char *str)
{
	int h;
	int y;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (h = 0; str[h] != '\0'; h++)
	{
		for (y = 0; y < 52; y++)
		{
			if (str[h] == alp[y])
			{
				str[h] = rot[y];
				break;
			}
		}
	}
	return (str);
}

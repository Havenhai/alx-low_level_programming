#include "main.h"
/**
 * leet - function that encode into 1337speak
 * @h: pointer to string
 * Return: h value
 */
char *leet(char *h)
{
	int str_length, leetcount;
	char letter[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (str_length = 0; h[str_length] != '\0'; str_length++)
	{
		for (leetcount = 0; leetcount < 10; leetcount++)
		{
			if (h[str_length] == letter[leetcount])
			{
				h[str_length] = num[leetcount];
			}
		}
	}
	return (h);
}

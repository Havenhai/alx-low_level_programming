#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: Substring
 * @needle: String
 * Return: a pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *hay = haystack;
		char *nee = needle;

		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}

		if (*nee == '\0')
			return (haystack);
	}

	return (0);
}

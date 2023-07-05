#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * returns 1 if the strings can be considered identical.
 * otherwise return 0.
 * @string1: pointer to string params
 * @string2: pointer to string params
 * s2 can contain the special character *.
 * The special char * can replace any string (including empty string)
 * Return: 0
 */

int wildcmp(char *string1, char *string2)
{
	if (*string1 == '\0')
	{
		if (*string2 != '\0' && *string2 == '*')
		{
			return (wildcmp(string1, string2 + 1));
		}
		return (*string2 == '\0');
	}

	if (*string2 == '*')
	{
		return (wildcmp(string1 + 1, string2) || wildcmp(string1, string2 + 1));
	}
	else if (*string1 == *string2)
	{
		return (wildcmp(string1 + 1, string2 + 1));
	}
	return (0);
}

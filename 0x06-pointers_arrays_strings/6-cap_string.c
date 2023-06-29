#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @stri: The string to be capitalized.
 * Return: A pointer to the changed string.
 */
char *cap_string(char *stri)
{
	int index = 0;

	while (stri[index])
	{
		while (!(stri[index] >= 97 && stri[index] <= 122))
			index++;

		if (stri[index - 1] == ' ' ||
		    stri[index - 1] == '\t' ||
		    stri[index - 1] == '\n' ||
		    stri[index - 1] == ',' ||
		    stri[index - 1] == ';' ||
		    stri[index - 1] == '.' ||
		    stri[index - 1] == '!' ||
		    stri[index - 1] == '?' ||
		    stri[index - 1] == '"' ||
		    stri[index - 1] == '(' ||
		    stri[index - 1] == ')' ||
		    stri[index - 1] == '{' ||
		    stri[index - 1] == '}' ||
		    index == 0)
			stri[index] -= 32;

		index++;
	}

	return (stri);
}

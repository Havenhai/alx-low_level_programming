#include <stdlib.h>
#include "main.h"

/**
 * word_count -function to count the number of words in a string
 * @h: string to evaluate
 * The function returns a pointer to an array of strings (words)
 * Each element of array should contain a single word, null-terminated
 * Return: number of words
 */
int word_count(char *h)
{
	int count, cn, word;

	count = 0;
	word = 0;

	for (cn = 0; h[cn] != '\0'; cn++)
	{
		if (h[cn] == ' ')
			count = 0;
		else if (count == 0)
		{
			count = 1;
			word++;
		}
	}

	return (word);
}

/**
 * **strtow - splits a string into words
 * @stri: string to split
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *stri)
{
	char **matrix, *tep;
	int j, l = 0, len = 0, words, c = 0, start, end;

	while (*(stri + len))
		len++;
	words = word_count(stri);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (stri[j] == ' ' || stri[j] == '\0')
		{
			if (c)
			{
				end = j;
				tep = (char *) malloc(sizeof(char) * (c + 1));
				if (tep == NULL)
					return (NULL);
				while (start < end)
					*tep++ = stri[start++];
				*tep = '\0';
				matrix[l] = tep - c;
				l++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = j;
	}

	matrix[l] = NULL;

	return (matrix);
}

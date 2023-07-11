#include "main.h"
#include <stdlib.h>

/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int j, o, s = 0, m = 0;
	char *stri;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0; j < ac; j++)
	{
		for (o = 0; av[j][o]; o++)
			m++;
	}
	m += ac;

	stri = malloc(sizeof(char) * m + 1);
	if (stri == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
	for (o = 0; av[j][o]; o++)
	{
		stri[s] = av[j][o];
		s++;
	}
	if (stri[s] == '\0')
	{
		stri[s++] = '\n';
	}
	}
	return (stri);
}

#include "main.h"
/**
 * _strcmp - compare string values
 * @ss1: input value
 * @ss2: input value
 * Return: ss1[y] - ss2[y]
 */
int _strcmp(char *ss1, char *ss2)
{
	int y;

	y = 0;
	while (ss1[y] != '\0' && ss2[y] != '\0')
	{
		if (ss1[y] != ss2[y])
		{
			return (ss1[y] - ss2[y]);
		}
	y++;
	}
	return (0);
}

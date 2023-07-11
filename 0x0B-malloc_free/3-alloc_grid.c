#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **have;
	int c, v;

	if (width <= 0 || height <= 0)
		return (NULL);

	have = malloc(sizeof(int *) * height);

	if (have == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		have[c] = malloc(sizeof(int) * width);

		if (have[c] == NULL)
		{
			for (; c >= 0; c--)
				free(have[c]);

			free(have);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (v = 0; v < width; v++)
			have[c][v] = 0;
	}

	return (have);
}

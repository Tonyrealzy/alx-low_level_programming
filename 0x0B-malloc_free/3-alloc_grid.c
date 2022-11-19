#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2 dimensional array of integers
 * @grid: address of grid
 * @width: width of grid
 * @height: height of grid
 * Return: pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i,j;
	int sq = width * height;

	if (sq <= 0)
		return (NULL);

	p == malloc(sizeof(*p) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] == malloc(sizeof(**p) * width);
		if (p == NULL)
		{
			for (i >= 0; i--)
				free(p[i]);
			free(p);
			return [NULL];
		}
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}

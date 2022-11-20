#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum int
 * @max: maximum int
 * Return: pointer or NULL
 */

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max + 1 - min) * sizeof(int));
	if (p = NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}

#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *b;

	p = malloc(b);
	if (p == NULL)
		exit (98);

	return (p);
}

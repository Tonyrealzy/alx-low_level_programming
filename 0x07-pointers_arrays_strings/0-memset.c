#include "main.h"

/**
 * _memset- fills memory with a constant byte
 * @s: pointer
 * @b: constant bytes
 * @n: memory area pointer
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n);

{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++
	}
	return (s);
}

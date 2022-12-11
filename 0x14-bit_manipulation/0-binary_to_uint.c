#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);
	if (*b != 0 | *b != 1)
		return (0);
	return (n);
}

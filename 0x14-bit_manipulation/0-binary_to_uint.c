#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1
 *
 * Return: 0 or the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 1;
	int i, j;

	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		j = 0;
		while (b[j] != '0')
		{
			n = 1 << j;
			j++;
			n += n;
		}
	}
	return (n);
}

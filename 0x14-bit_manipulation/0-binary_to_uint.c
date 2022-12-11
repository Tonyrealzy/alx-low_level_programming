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
	int i = 0;

	if (!b)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		while (b[i] != '0')
		{
			n = 1 << i;
			i++;
			n += n;
		}
	}
	return (n);
}

#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: set number
 * @m: another set number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, j;

	if (i > 64)
		return (-1);

	j = n ^ m;
	while (j > 0)
	{
		i = i + (j & 1);
		j >>= 1;
	}

	return (i);
}

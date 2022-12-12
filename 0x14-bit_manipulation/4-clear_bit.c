#include "main.h"

/**
 * clear_bit - sets the value of
 * a bit to 0 at a given index
 * @n: set number
 * @index: index starting from 0
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 64)
		return (-1);

	o = (1 << index);
	*n = *n & ~o;

	return (1);
}

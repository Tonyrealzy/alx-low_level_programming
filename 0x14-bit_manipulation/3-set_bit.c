#include "main.h"

/**
 * set_bit - sets the value of
 * a bit to 1 at a given index
 * @n: the set number
 * @index: index starting from 0 of the bit
 *
 * Return: an integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int *p;

	if (index > 64)
		return (-1);

	p = (n >> index) & 1;
	return (1);
}

#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 * @n: number
 * @index: index starting from 0
 *
 * Return: value of bit in int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int p;

	if (index > 64)
		return (-1);

	p = (n >> index) & 1;
	return (p);
}

#include "main.h"

/**
 * print_number- prints an integer
 * @n: integer
 * Return: 0
 */

void print_number(int n)
{
	unsigned int x;

	if n < 0
	{
		putchar('-');
		n = -n;
	}

	x = n;

	if (x / 10)
	{
		print_number(x / 10);
	}
	putchar(x % 10 + '0');
}

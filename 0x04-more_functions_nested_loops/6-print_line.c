#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number of times
 * 
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
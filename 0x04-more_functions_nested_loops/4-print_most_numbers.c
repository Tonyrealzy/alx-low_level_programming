#include "main.h"
#include <stdio.h>

/**
 *print_most_numbers - print 01356789
 * @c: char to check
 * Return: void
 */

void print_most_numbers(void)
{
	char c;
	
	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			putchar(c);
	}
	putchar('\n');
}

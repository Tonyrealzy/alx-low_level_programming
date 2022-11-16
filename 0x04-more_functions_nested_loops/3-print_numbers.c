#include "main.h"

/**
*print_numbers - print 0123456789
*Return: void
*/

void print_numbers(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
	_putchar(s);
	}
	_putchar('\n');
}

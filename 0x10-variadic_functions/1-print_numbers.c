#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a separator
 * @n: number of integers
 * @...: variadic function
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list set;

	va_start(set, n);
	
	if (separator == NULL)
		return ("");
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(set, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(set);
}

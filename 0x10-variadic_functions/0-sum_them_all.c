#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: variadic function
 *
 * Return: 0 or sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int numb = 0;
	va_list numb;

	va_start(numb, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(numb, int);

	va_end(numb);

	return (sum);
}

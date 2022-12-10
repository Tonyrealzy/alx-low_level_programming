#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings
 * @separator: separator string
 * @...: variadic function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}

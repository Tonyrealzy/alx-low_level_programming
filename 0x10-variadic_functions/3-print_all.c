#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: variadic function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i, ii;
	char cc, ss, ff;
	va_list arg_list;

	va_start(arg_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				cc = va_arg(arg_list, char);
				printf("%s", cc);
				break;
			case 'i':
				ii = va_arg(arg_list, int);
				printf("%d", ii);
				break;
			case 'f':
				ff = va_arg(arg_list, double);
				printf("%f", ff);
				break;
			case 's':
				ss = va_arg(arg_list, char *);
				if (ss == NULL)
					ss = "(nil)";
				printf("%s", ss);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0')
		{
			printf(", ");
			i++;
		}
	}
	printf("\n");
	va_end(arg_list);
}

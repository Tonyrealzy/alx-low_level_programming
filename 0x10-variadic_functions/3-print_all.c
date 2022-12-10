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
	int i;
	char *ss;
	char *separator = "";
	va_list arg_list;

	va_start(arg_list, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(arg_list, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(arg_list, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(arg_list, double));
				break;
			case 's':
				ss = va_arg(arg_list, char *);
				if (ss == NULL)
					ss = "(nil)";
				printf("%s%s", separator, ss);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(arg_list);
}

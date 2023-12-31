#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @separator: string to separate passed strings
 * @n: # of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	const char *str;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, const char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	va_end(args);
	printf("\n");
}

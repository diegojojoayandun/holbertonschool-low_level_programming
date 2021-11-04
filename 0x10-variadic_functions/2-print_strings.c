#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: char use to separate strings
 * @n: number of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (i != n - 1)
		{
			if (str == NULL)
				printf("%s%s", "(nil)", separator);
			else
				printf("%s%s", str, separator);
		}

		else if (i == n - 1)
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}

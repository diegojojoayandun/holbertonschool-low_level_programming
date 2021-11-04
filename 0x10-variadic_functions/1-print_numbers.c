#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char used to sepated numbers
 * @n: number of argumuents
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i < n - 1 && separator != NULL)
			printf("%d%s", va_arg(args, int), separator);

		else if (i == n - 1)
			printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}

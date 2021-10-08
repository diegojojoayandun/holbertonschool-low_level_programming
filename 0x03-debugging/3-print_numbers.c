#include "main.h"

/**
 * print_numbers - prints 0-9 numbers
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}

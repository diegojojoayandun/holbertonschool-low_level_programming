#include "main.h"

/**
 * print_diagonal - print diagonal to n distance
 * @n: value of number to spaces to put the diagonal
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int j;

		for (j = 0; j < n; j++)
		{
			int i = 0;

			while (i < j)
			{
				_putchar(' ');
				i++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

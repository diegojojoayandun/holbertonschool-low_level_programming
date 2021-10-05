#include "main.h"

/**
 * print_sign - Function that prints the sign of a number
 * @n: a integer number take to parameter
 * Return: 1 if greater than zero, 0 equaul to zero otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}

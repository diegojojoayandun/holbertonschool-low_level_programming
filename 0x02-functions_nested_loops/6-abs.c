#include "main.h"

/**
 * _abs - function that return de absolute value of a n number
 * @n: integer that take as parameter
 * Return: @n value as absulote value
 */
int _abs(int n)
{
	if (n <  0)
	{
		n = n * (-1);
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (n);
}

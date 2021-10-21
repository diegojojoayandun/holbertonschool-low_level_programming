#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: Square of number n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt2(n, 1));
}

/**
 * sqrt2 - get natural square on number n
 * @n: number
 * @i: iterator
 * Return: square of n number
 */
int sqrt2(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt2(n, i + 1));
}

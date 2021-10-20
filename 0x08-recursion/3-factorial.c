#include "main.h"

/**
 * factorial - get factorial of number n
 * @n: number to get the factorial
 * Return: factorial n
 */
int factorial(int n)
{
	(if n == 0 || n < 0) ? return (-1) : return (n * factorial(n - 1));
}

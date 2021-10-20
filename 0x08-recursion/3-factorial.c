#include "main.h"

/**
 * factorial - get factorial of number n
 * @n: number to get the factorial
 * Return: factorial n
 */
int factorial(int n)
{
	return (n * factorial(n - 1));
}

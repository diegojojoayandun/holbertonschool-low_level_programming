#include "main.h"

/**
 * _pow_recursion - x ^ y
 * @x: value to elevated
 * @y: exponent
 * Return: x ^y
 */
int _pow_recursion(int x, int y)
{
	return (x * _pow_recursion(x, y - 1));
}

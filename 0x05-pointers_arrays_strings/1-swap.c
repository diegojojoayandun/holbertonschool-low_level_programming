#include "main.h"

/**
 * swap_int - Swap two values taken as parameters
 * @a: pointer to int, first parameter
 * @b: pointer to int, second parameter
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

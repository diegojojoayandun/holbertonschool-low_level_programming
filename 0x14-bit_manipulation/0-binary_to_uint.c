#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary to int
 *
 * @b: const char
 *
 * Return: 0 at error.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0, j = 0, mult = 1, i;

	if (!b)
		return (0);

	while (b[j])
		j++;

	for (i = j - 1; i != 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		if (b[i] == '1')
			uint += mult;
		mult = mult * 2;
	}
	return (uint);
}

#include "main.h"

/**
 * print_rev - prints a *str in reverse
 * @str: pointer tu char passed by parameter
 */
void print_rev(char *str)
{
	int i, j, len;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	len = i;


	for (j = len - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}

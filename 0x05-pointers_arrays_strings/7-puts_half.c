#include "main.h"

/**
 * puts_half - prints a half string
 * @str: string that print the half
 */
void puts_half(char *str)
{
	int i, l;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	i = 0;

	if (((l - 1) / 2) % 2 == 0)
	{
		for (i = (l + 1) / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = l / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

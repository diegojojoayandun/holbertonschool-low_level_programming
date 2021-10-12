#include "main.h"

/**
 * puts2 - prints a char avoid some numbers
 * @str: pointer to char as parameter contain a string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}

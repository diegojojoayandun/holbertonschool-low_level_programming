#include "main.h"

/**
 * _puts - prints the text pass by reference
 * @str: pointer to char
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}

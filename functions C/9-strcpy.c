#include "main.h"

/**
 * *_strcpy - make a copy of two strings
 * @x: pointer as first parameter as copy of the string
 * @y: string to be copied
 * Return: the copied string
 */
char *_strcpy(char *x, char *y)
{
	int i, j;

	j = 0;

	while (y[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		x[i] = y[i];
	}
	x[i] = '\0';

	return (x);
}

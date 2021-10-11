#include "main.h"

/**
 * _strlen - function that retrive the lenght of a string
 * @s: string to check the lenght
 * Return: int value as lenght of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

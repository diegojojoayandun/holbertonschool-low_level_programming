#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string as parameter
 * @s2: second string as parameter
 * Return: 0 if  s1 = '\n' or any other value  if
 *  s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

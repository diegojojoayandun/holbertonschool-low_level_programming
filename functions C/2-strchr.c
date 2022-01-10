#include <stdio.h>
#include "main.h"

/**
 * *_strchr - look for a character
 * @s: string to search
 * @c: char to be find
 *
 * Return: pointer with the char found
 */
char *_strchr(char *s, char c)
{
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}

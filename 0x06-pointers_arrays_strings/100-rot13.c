#include "main.h"

/**
 * rot13 - encode to Rotate13 encryption
 * @s: string to be encoded
 * Return: the encode string
 */
char *rot13(char *s)
{
	int i, j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}

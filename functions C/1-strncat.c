#include "main.h"
/**
 * _strncat - concat a number n of bytes to a string
 * @dest: destination string
 * @src: source string
 * @n: n is bytes number to be concat
 * Return: pointer that keeps the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

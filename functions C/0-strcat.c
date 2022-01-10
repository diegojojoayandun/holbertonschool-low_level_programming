#include "main.h"

/**
 * _strcat - concat two string
 * @dest: string tu pointer returns
 * @src: string to be append to the first one
 * Return: pointer with the concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

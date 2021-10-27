#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Pointer,it if fails return NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *empt;
	int i, len1, len2, j;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	i = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		s3[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= len2)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	return (s3);
}

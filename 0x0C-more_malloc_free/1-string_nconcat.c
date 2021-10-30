#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: String to put at the end of s1
 * @n: part of s2
 * Return: newly allocated space in memory, which contains s1, followed by the
 * first n bytes of s2, and null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *empt;
	unsigned int i, len, j;
	unsigned int size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*ptr);
	nstr = malloc(size + 1);
	if (nstr == NULL)
		return (NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

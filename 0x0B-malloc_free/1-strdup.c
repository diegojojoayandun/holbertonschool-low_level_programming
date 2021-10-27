#include <stdlib.h>

/**
 * _strdup - Return pointer to a new string that duplicates given string,
 * @str: String to dup
 * Return: Pointer , if fail return NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	ptr = malloc(len * sizeof(*str));
	if (ptr == NULL)
		return (NULL);
	while (i <= len)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}

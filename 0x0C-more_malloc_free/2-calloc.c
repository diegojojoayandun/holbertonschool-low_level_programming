#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * @nmemb: Number of elements
 * @size: Size of every element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int u_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	u_size = nmemb * size;
	ptr = malloc(u_size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < u_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

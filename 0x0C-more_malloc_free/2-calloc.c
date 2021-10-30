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
	unsigned int _size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	_size = nmemb * size;
	ptr = malloc(_size);
	if (ptr == NULL)
		return (NULL);
	while (i < _size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

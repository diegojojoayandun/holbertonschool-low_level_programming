#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: Size of the array
 * @c: Char
 * Return: Pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;
	if (size != 0)
		ptr = malloc(size * sizeof(c));
	else
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}

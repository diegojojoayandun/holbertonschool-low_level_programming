#include "lists.h"

/**
 * list_len - list len.
 * @h: linked list
 *
 * Return: the length
 */
size_t list_len(const list_t *h)
{
	int i;
	const list_t *node = h;

	for (i = 0; node != NULL; i++)
	{
		node = (*node).next;
	}
	return (i);
}

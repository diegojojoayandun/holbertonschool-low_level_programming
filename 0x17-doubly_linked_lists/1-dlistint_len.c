#include "lists.h"

/**
 * dlistint_len - Gets the number of elements in list
 * @h: pointer to the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}


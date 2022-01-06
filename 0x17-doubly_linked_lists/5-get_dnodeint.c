#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node value for its index
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (0);

    for(i = 0; head != NULL && i < index; i++)
		head = (*head).next;

	return (head ? head : NULL);
}

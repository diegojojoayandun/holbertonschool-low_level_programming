#include "lists.h"

/**
 * sum_dlistint - function that sum of all elements of a doubly linked list.
 * @head: pointer to the list
 *
 * Return: number of nodes in the list
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int add = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add += (*head).n;
		head = (*head).next;
	}

	return (add);
}


#include "lists.h"

/**
 * add_dnodeint_end - adds node at the end of the dlist
 * @head: double pointer to list
 * @n: int value to be add at node
 *
 * Return: the address of the recently add node, or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *aux = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;
	(*new_node).next = NULL;

	if (*head == NULL)
	{
		(*new_node).prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((*aux).next != NULL)
		aux = (*aux).next;

	(*aux).next = new_node;
	(*new_node).prev = aux;

	return (new_node);
}

#include "lists.h"

/**
 * add_dnodeint -  function that adds a new node at the beginning
 * @head: double pointer to list
 * @n: integer value to add at node
 *
 * Return: address of new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	(*new_node).n = n;

	(*new_node).next = *head;
	(*new_node).prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

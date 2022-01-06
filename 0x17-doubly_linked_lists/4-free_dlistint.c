#include "lists.h"

/**
 * free_dlistint - function that frees a doubly linked list
 * @head: pointer to list to be freeded
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head != NULL)
	{
		aux = (*head).next;
		free(head);
		head = aux;
	}
}

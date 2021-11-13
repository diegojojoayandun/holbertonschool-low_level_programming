#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: linked list of list_t.
 *
 * Return: nothing.
 */
void free_list(list_t *head)
{

	for ( ; head != NULL; head = (*head).next)
	{
		free((*head).str);
		free(head);
	}
}

#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *prev;

	curr = head;
	prev = NULL;
	while (curr != NULL)
	{
		prev = curr;
		curr = curr->next;
		free(prev);
	}
}

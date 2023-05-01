#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * sets head to null
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *delN;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		delN = *head;
		*head = (*head)->next;
		free(delN);
	}
}

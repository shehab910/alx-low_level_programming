#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *delN;
	
	while (head != NULL)
	{
		delN = head;
		head = head->next;
		free(delN);
	}
}

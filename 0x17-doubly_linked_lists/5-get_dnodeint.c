#include "lists.h"

/**
 * get_dnodeint_at_index - gets nth node of a dlistint_t
 * @head: the head of the list
 * @index: the index of the node
 * Return: the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = NULL;
	unsigned int currI = 0;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr != NULL)
	{
		if (currI == index)
			return (curr);
		curr = curr->next;
		currI++;
	}
	return (NULL);
}

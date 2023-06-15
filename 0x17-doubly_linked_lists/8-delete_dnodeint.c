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

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: the head of the list
 * @index:  the index of the node that should be deleted, starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *bef, *aft;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = (*head)->next;
		free(del);
		return (1);
	}
	del = get_dnodeint_at_index(*head, index);
	if (del == NULL)
		return (-1);
	bef = del->prev;
	aft = del->next;
	if (bef != NULL)
		bef->next = aft;
	if (aft != NULL)
		aft->prev = bef;
	free(del);
	return (1);
}

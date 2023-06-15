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
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the node to insert
 * @n: value of the node to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prevN, *middN, *nextN;

	if (idx == 0)
		return (add_dnodeint(h, n));
	prevN = get_dnodeint_at_index(*h, idx - 1);
	if (prevN == NULL)
		return (NULL);
	middN = malloc(sizeof(dlistint_t));
	if (middN == NULL)
		return (NULL);
	nextN = prevN->next;
	middN->n = n;
	middN->next = nextN;
	middN->prev = prevN;
	if (nextN != NULL)
		nextN->prev = middN;
	prevN->next = middN;
	return (middN);
}

#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of doubly linked list
 * @n: value to add to new node
 * Return: pointer to new node, NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	if (head == NULL)
		return (NULL);
	curr = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (curr == NULL)
	{
		*head = new;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	while (curr->next != NULL)
		curr = curr->next;
	new->n = n;
	new->prev = curr;
	new->next = NULL;
	curr->next = new;
	return (new);
}

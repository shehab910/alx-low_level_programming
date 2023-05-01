#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head list
 * @idx: the index
 * @n: the number
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt = 0;
	listint_t *tmp, *new;

	if (!head)
		return (NULL);
	tmp = *head;
	if (!tmp)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (cnt != idx - 1)
	{
		if (tmp == NULL)
			return (NULL);
		cnt++;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

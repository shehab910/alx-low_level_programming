#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - nth node of listint_t linked list.
 * @head: list
 * @index: node index
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *tmp = head;

	if (!tmp)
		return (NULL);
	while (cnt != index && tmp != NULL)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (tmp);
}

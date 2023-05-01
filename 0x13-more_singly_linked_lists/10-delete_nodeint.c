#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: list head
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int cnt = 0;
	listint_t *tmp = *head, *delN;

	if (!tmp)
		return (-1);
	if (index == 0)
	{
		delN = (*head);
		(*head) = delN->next;
		free(delN);
		return (1);
	}
	while (cnt != index - 1)
	{
		if (tmp == NULL)
			return (-1);
		cnt++;
		tmp = tmp->next;
	}
	if (!tmp->next)
		return (-1);
	delN = tmp->next;
	tmp->next = delN->next;
	free(delN);
	return (1);
}

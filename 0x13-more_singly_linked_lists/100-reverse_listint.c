#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node of the list
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in
 * your function
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *iter, *tmp, *bef = NULL;

	if (!head || !*head)
		return (NULL);
	tmp = iter = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		iter->next = bef;
		bef = iter;
		iter = tmp;
	}
	tmp->next = bef;
	*head = tmp;
	return (*head);
}

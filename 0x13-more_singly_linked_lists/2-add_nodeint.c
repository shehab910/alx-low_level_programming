#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: head of the list
 * @n: new node number
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newl;

	newl = malloc(sizeof(listint_t));
	if (newl == NULL)
		return NULL;
	newl->n = n;
	newl->next = *(head);
	*head = newl;
	return (newl);
}

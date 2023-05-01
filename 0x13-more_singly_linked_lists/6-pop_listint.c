#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the head of the list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *delN;
	int n;

	delN = *head;
	*head = (*head)->next;
	n = delN->n;
	free(delN);
	return (n);
}

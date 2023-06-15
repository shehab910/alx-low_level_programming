#include "lists.h"

/**
 * sum_dlistint - returns sum of list
 * @head: pointer to head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}

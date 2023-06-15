#include "lists.h"

/**
 * dlistint_len - counts elements in a dlistint_t list
 * @h: pointer to head of list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		current = current->next;
		count++;
	}
	return (count);
}

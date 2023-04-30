#include <stdio.h>
#include "lists.h"

/**
 * listint_len - num of elements in a linked listint_t list.
 * @h: list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		num++;
	}
	return (num);
}

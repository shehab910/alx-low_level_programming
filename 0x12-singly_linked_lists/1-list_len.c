#include "lists.h"

/**
 * list_len - get number of elements in a linked list_t list.
 * @h: list to calc length for
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp = h;
	size_t cnt = 0;

	while (tmp != NULL)
	{
		cnt++;
		tmp = tmp->next;
	}
	return (cnt);
}

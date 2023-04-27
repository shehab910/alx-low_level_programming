#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const struct list_s *tmp = h;
	while (tmp != NULL)
	{
		i++;
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (i);
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _r - reallocate memory for array of pointers
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add to new list
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t i;

	new_list = malloc(sizeof(listint_t *) * size);
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		new_list[i] = list[i];
	new_list[i] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the first node of the list
 * This function can print lists with a loop
 * You should go through the list only once
 * If the function fails, exit the program with status 98
 * Output format: see example
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, size;
	const listint_t **list;

	size = 0;
	list = malloc(sizeof(listint_t *));
	if (list == NULL)
		exit(98);
	while (head != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (size);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		list = _r(list, ++size, head);
		head = head->next;
	}
	free(list);
	return (size);
}

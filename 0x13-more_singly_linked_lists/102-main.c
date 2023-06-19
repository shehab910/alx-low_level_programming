#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	const listint_t *head;
	listint_t *head2;
	listint_t *node;
	size_t i;
	size_t size;
	listint_t **arr;
	listint_t *tmp;

	/*head2 = NULL;
	add_nodeint(&head2, 0);
	add_nodeint(&head2, 1);
	add_nodeint(&head2, 2);
	add_nodeint(&head2, 3);
	add_nodeint(&head2, 4);
	add_nodeint(&head2, 98);
	add_nodeint(&head2, 402);
	add_nodeint(&head2, 1024);
	print_listint_safe(head2);*/
	head = NULL;
	node = add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	node->next = add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	// print_listint_safe(head);
	size = listint_len(head);
	arr = list_to_array_unique(head, size);
	tmp = head;
	for (i = 0; i < size; i++)
	{
		printf("%p \t %p\n", (void *)arr[i], (void *)tmp);
		tmp = tmp->next;
	}

	/*free_listint_safe(&head2);
	free_listint_safe(&head);
	printf("%p, %p\n", (void *)head2, (void *)head);*/
	return (0);
}
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a listint_t list
 *
 * @head: pointer to the first node
 *
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *prev;

	if (head == NULL)
		exit (98);
	current = head;
	prev = NULL;
	while (current != NULL)
	{
		printf("[%p]%d\n", (void*)current, current->n);
		count++;
		/*detect loop*/
		if (current <= prev)
		{
			printf("->[%p]%d\n", (void*)current->next, current->next->n);
			break;
		}
		prev = current;
		current = current->next;
	}
	return (count);
}

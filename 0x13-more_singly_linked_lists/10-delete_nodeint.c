#include "lists.h"

/**
 * deleter_nodeint_at_index - deletes the node at index of a linked list
 *
 * @head: double pointer to the beginning of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *prev;
	if (*head == NULL)
		return (-1);
	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	for (i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	prev->next = current->next;
	free(current);

	return (1);
}



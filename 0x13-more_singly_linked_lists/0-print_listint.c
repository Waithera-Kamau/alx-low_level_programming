#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list
 *
 * @h: pointer to first/head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;
	/*Return 0 as number of nodes when h is NULL*/
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		/*go to the next node*/
		h = h->next;
		/*count number of nodes*/
		node_count++;
	}
	/*prints last node*/
	printf("%d\n", h->n);

	return (node_count);
}

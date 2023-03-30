#include "lists.h"
/**
 * list_len - gets the no of nodes
 *
 * @h: pointer to the head
 *
 * Return: no of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;
	/*if head is null return 0 nodes*/
	if (h == NULL)
		return (0);
	/*iterate through the nodes*/
	while (h->next != NULL)
	{
		/*go to the next nodes*/
		h = h->next;
		/*count mode*/
		node_count++;
	}
	return (node_count);
}

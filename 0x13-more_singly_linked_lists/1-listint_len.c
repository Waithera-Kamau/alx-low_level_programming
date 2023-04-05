#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 *
 * @h: pointer to the first node
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 1;
	/*return 0 as number of elements when h is NULL*/
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		/*count the number of elements*/
		if (h->n != '\0')
			elements++;
		/*go to the next node*/
		h = h->next;
	}
	return (elements);
}
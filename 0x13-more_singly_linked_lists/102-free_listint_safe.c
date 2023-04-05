#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - a fucntion that fress a list
 *
 * @h: head of the list to tbe freed
 *
 * Return: size of the list freed
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		count++;
		if (*h <= (*h)->next)
		{
			free (*h);
			break;
		}
		else
		{
			temp = (*h)->next;
			free (*h);
			*h = temp;
		}
	}
	*h = NULL;
	return (count);
}


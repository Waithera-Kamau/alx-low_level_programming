#include "lists.h"

/**
 * pop_listint - deletes head/ first node
 *
 * @head: pointer to the first node in the linked list
 *
 * Return: the head's node's data(n)
 */

int pop_listint(listint_t **head)
{
	int first_node;
	listint_t *temp, *next;
	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);
	/*sets head's address to temp*/
	temp = *head;
	/*gets address of next node*/
	next = temp->next;
	/*gets element of first node*/
	first_node = temp->n;
	/*frees first node*/
	free(temp);
	/*set head to second node*/
	*head = next;
	/*return element of first node*/
	return (first_node);
}

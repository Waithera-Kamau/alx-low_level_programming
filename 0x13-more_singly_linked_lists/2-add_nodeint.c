#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a linked list
 *
 * @head: pointer to the first/head node
 * @n: integer n to add in a new node
 *
 * Return: address of the new element or NULL if fail
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	/*assign to heap*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	/*link first node in head with the new_node*/
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	/*adds new node at the beginning of the list*/
	*head = new_node;

	return (*head);
}

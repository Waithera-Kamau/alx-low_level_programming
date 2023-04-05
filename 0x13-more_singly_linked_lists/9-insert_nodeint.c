#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at any given position in the list
 *
 * @head: pointer to the first/head node
 * @idx: index of the list whenre the new node should be added
 * @n: element to add to the new node
 *
 * Return: NULL if fail or addr of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int index;
	/*place first/head node as current*/
	current = *head;

	/*assign to heap*/
	new_node = malloc(sizeof(listint_t));
	if ((*head == NULL && idx != 0) || new_node == NULL)
		return (NULL);
	/*add our element to the new node*/
	new_node->n = n;
	/*iterate list to node position idx - 2*/
	for (index = 0; head != NULL && index < idx - 1; index++)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
	}
	/*if the index for the new node is 0*/
	if (idx == 0)
	{
		/*first node will be moved to second node*/
		new_node->next = *head;
		/*new node will be placed as the first/head node*/
		*head = new_node;
	}
	else if (current->next) /*if index where to add new node is != 0*/
	{
		/*place current node after new node*/
		new_node->next = current->next;
		/*set the new node at index idx*/
		current->next = new_node;
	}
	else /*if node position is not present in the list*/
	{
		/*set next addr as NULL< indicates last node*/
		new_node->next = NULL;
		/*set new node at the last position in the list*/
		current->next = new_node;
	}

	return (new_node);
}

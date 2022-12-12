#include "lists.h"

/**
 * free_dlistint - free the double linked list
 * @head: beginning of the node
 *
 * Return: success
 *
 */

void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		dlistint_t *next = head->next;

		free(head);
		head = next;
	}
}

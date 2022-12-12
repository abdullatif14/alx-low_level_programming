#include "lists.h"

/**
 * print_dlistint - prints all the elements of the list
 *
 * @h: head of the node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	while (h)
	{
		dprintf("%d\n", h->n);
		h = h->next;

	}
}

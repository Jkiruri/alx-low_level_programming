#include "lists.h"

/**
 * print_dlistint - prints all nodes of a doubly linked list
 * @h: Head of dlistint_len
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}

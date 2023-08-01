#include "lists.h"

/**
 * print_listint - a func prints all the elements of a linked list
 * @h: the linked list, type listint_t to print
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}

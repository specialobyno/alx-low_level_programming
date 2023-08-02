#include <stdlib.h>
#include "lists.h"

/**
 * list_len - function that returns the number of 
 * elements in a linked list
 * @h: the pointer to the list_t list
 * 
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}

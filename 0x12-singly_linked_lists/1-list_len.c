#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - function that check the 
 * code for Holberton School students.
 * @h: the name of the list
 * 
 * Return: the number of nodes.
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}

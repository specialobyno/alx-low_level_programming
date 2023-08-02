#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a linked list
 * @head: the list_t list to be freed
 */

void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}

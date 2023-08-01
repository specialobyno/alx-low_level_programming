#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the node at a certain index in a linked list
 * @head: the first node in the linked list
 * @index: the index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tempo = head;

	while (tempo && counter < index)
	{
		tempo = tempo->next;
		counter++;
	}

	return (tempo ? tempo : NULL);
}

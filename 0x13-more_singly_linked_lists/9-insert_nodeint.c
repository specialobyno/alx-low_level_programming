#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 *  a new node in a linked list, at a given position
 * @head: the pointer to the first node in the list
 * @idx: the index where the new node is added
 * @n: the data to insert in the new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newer;
	listint_t *tempo = *head;

	newer = malloc(sizeof(listint_t));
	if (!newer || !head)
		return (NULL);

	newer->n = n;
	newer->next = NULL;

	if (idx == 0)
	{
		newer->next = *head;
		*head = newer;
		return (newer);
	}

	for (i = 0; tempo && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newer->next = tempo->next;
			tempo->next = newer;
			return (newer);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}

#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at
 * the end of a linked list
 * @head: the pointer to the first element in the list
 * @n: the data to insert in the new element
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *t;
	listint_t *temp = *head;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);

	t->n = n;
	t->next = NULL;

	if (*head == NULL)
	{
		*head = t;
		return (t);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = t;

	return (t);
}

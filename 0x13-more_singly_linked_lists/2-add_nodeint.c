#include "lists.h"

/**
 * add_nodeint - function that adds a new node at
 *  the beginning of a linked list
 * @head: the pointer to the first node in the list
 * @n: the data to insert in that new node
 * Return: pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *t;

	t = malloc(sizeof(listint_t));
	if (!t)
		return (NULL);

	t->n = n;
	t->next = *head;
	*head = t;

	return (t);
}

#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a linked list
 * @head: the pointer to the first element in the linked list
 * Return: the data inside the elements 
 * that was deleted, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (data);
}

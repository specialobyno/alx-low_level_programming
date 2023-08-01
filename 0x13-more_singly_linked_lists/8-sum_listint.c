#include "lists.h"

/**
 * sum_listint - function that calculates the sum
 * of all the data in a listint_t list
 * @head: the first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		sum += tempo->n;
		tempo = tempo->next;
	}

	return (sum);
}

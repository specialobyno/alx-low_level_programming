#include "lists.h"
/**
 * print_listint_safe - function that prints a 
 * linked list with a loop safely.
 * @head: the pointer to the 1st node of the linked list
 * Return: new node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tempo = NULL;
	const listint_t *l_n = NULL;
	size_t count = 0;
	size_t new_n;

	tempo = head;
	while (tempo)
	{
		printf("[%p] %d\n", (void *)tempo, tempo->n);
		count++;
		tempo = tempo->next;
		l_n = head;
		new_n = 0;
		while (new_n < count)
		{
			if (tempo == l_n)
			{
				printf("-> [%p] %d\n", (void *)tempo, tempo->n);
				return (count);
			}
			l_n = l_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}

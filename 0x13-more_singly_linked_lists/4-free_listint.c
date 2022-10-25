#include "lists.h"

/**
 * free_listint - (listint_t *head)
 * @head: A pointer
 * Return: Success
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

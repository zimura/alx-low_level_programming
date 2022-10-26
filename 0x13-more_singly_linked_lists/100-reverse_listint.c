#include "lists.h"

/**
 * reverse_listint - Reverses a listint
 * @head: A pointer
 * Return: success
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}

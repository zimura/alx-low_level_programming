#include "lists.h"

/**
 * add_nodeint - adds node
 * @head: A pointer
 * @n: an integer
 * Return: success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;

	*head = new;
	return (new);
}

#include "lists.h"

/**
 * insert_nodeint_at_index - insertx a new node
 * @head: A pointer
 * @idx: the index
 * @n: the integer
 * Return: success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);

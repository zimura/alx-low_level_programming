#include "lists.h"

/**
 * sum_listint - calculates sum of data
 * @head: A pointer
 * Return: sucess
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

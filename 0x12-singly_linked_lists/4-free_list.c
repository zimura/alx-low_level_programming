#include "list.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t
 * @head: a pointer to list_t
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}

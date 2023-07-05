#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees linked list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *ahead;

	current = head;
	while (current != NULL)
	{
		ahead = current->next;
		free(current);
		current = ahead;
	}
}

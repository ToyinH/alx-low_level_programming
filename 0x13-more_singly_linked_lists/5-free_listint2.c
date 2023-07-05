#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees linked list and sets head to NULL
 * @head: head of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *ahead;

	current = *head;
	while (current != NULL)
	{
		ahead = current->next;
		free(current);
		current = ahead;
	}
	*head = NULL;
}

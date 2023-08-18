#include "lists.h"
/**
 * free_dlistint - function that frees list
 * @head: pointer to head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

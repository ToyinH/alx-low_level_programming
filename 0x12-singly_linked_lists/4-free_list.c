#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - function that frees a list_t list
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	list_t *ahead;
	list_t *current;

	current = head;
	while (current != NULL)
	{
		ahead = current->next;
		free(current);
		current = ahead;
	}

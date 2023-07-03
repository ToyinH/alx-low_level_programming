#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of linked list
 * @str: string element of linked list
 *
 * Return: return pointer to new element or NULL if not successful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

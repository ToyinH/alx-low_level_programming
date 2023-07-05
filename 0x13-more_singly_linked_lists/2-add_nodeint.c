#include "lists.h"
#include <stdio.h>
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a linked list
 * @head: head of linked list
 * @n: element of node
 *
 * Return: return pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

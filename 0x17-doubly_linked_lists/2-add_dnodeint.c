#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list
 * @head: double pointer to head
 * @n: element
 *
 * Return: return the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		new_node->next = *head;
		new_node->prev = NULL;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}

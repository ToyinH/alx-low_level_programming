#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head: pointer to head node
 * @n: element
 *
 * Return: return adress of new element or NULL
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = *head;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
		new->prev = temp;
	}
	return (new);
}

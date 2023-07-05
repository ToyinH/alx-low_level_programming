#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @n: element
 * @head: head of linked list
 * @idx: index starting from 0
 *
 * Return: return new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp;
	listint_t *new;

	if (head == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while (i < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		else
		{
			new->next = temp->next;
			temp->next = new;
		}
	}
	return (new);
}

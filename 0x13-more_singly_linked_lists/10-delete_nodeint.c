#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list
 * @head: head of linked list
 * @index: index starting from 0
 *
 * Return: return 1 if successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;

	if (index == 0)
	{
		free(*head);
	}
	else
	{
		while (i < index - 1 && temp != NULL)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
		{
			return (-1);
		}
		else
		{
			free(temp->next);
		}
	}
	return (1);
}

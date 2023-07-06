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
	listint_t *temp, *temp2 = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	while (i < index && temp != NULL)
	{
		temp2 = temp;
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	else if (temp2 != NULL)
	{
		temp2->next = temp->next;
	}
	else
		*head = temp->next;
	free(temp);

	return (1);
}

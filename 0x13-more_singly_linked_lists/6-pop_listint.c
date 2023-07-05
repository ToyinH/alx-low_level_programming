#include "lists.h"
/**
 * pop_listint - function that delete the head of node of a linked list
 * @head: head of linked list
 *
 * Return: return head node's data or 0 if failed
 */
int pop_listint(listint_t **head)
{
	int x;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	temp = *head;
	x = temp->n;
	*head = temp->next;
	free(temp);
	return (x);
}

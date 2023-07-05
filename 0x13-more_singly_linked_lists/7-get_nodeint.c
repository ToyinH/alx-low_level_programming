#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list
 * @head: head of linked list
 * @index: index of node starting at 0
 *
 * Return: return nth node or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	else
		return (temp);
}

#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: head of linked list
 * Return: return sum or 0 if empty
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0, x;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		x = temp->n;
		sum += x;
		temp = temp->next;
	}
	return (sum);
}

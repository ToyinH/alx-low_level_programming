#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements
 * in a linked list
 * @h: pointer to head node
 *
 * Return: return number of elements
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

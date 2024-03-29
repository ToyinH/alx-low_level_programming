#include "lists.h"
/**
 * print_dlistint - funtion that prints all elements of dlistint_t list
 * and returns the number of nodes
 * @h: head node
 * Return: return the number of nodes *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}

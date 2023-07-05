#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a list
 * @h: head of linked list
 *
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	size_t count = 0;
	
	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that prints all the elements of a list
 * @h: head of linked list
 * Return: return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		c++;
	}
	return (c);
}

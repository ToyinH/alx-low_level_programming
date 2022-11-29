#include <stddef.h>
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: head of the linked list
 * Return: returns the number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		c++;
		current = current->next;
	}
	return (c);
}

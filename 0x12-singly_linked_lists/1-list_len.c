#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements
 * in a liked list_t list.
 * @h: head of linked list
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *current;
	current = h;
	size_t c;
	c = 0;

	while (current != NULL)
	{
		current = current->next;
		c++;
	}
	return (c);
}

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: head of linked list
 *
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}

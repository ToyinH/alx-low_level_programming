#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position.
 * @h: pointer to header node
 * @idx: index
 * @n: element
 * Return: return the address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current, *next;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0) /*add node at the beginning*/
	{
		new_node->prev = NULL;
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	while (current != NULL)
	{
		next = current->next;
		if (idx - 1 == count)
		{
			current->next = new_node;
			new_node->prev = current;
			new_node->next = next;
			next->prev = new_node;
			return (*h);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}

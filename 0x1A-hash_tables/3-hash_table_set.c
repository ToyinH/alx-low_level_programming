#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @key: key to get index
 * @value: value associated with ey
 * @ht: hashtable
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;
	char *new_value;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL) /*iterate the list to check for thesame key*/
	{
		if (strcmp(current->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(current->value);
			current->value = new_value;
			printf("key: %s value: %s\n", current->key, current->value);
			return (1);
		}
		current = current->next;
	}
	/*add new node to empty index or if key not found when iterated above*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	printf("key: %s value: %s\n", new_node->key, new_node->value);
	return (1);
}

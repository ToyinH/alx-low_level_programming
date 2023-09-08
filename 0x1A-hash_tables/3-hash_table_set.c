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
	hash_node_t *new_node, *table_node;
	unsigned long int index;

	if (key == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	index = key_index((const unsigned char *)key, ht->size);
	printf("index: %lu\n", index);
	table_node = ht->array[index];
	if (table_node == NULL)
	{
		table_node = new_node;
	}
	else
	{
		if (strcmp(table_node->key, key) == 0)
		{
			strcpy(table_node->value, value);
			return (1);
		}
		else
		{
			if (table_node->next == NULL) /*no linked list*/
				table_node->next = new_node;
			else
			{
				new_node->next = table_node->next;
				table_node->next = new_node;
			}
		}
	}
	printf("key: %s value: %s\n", table_node->key, table_node->value);
	return (1);
}

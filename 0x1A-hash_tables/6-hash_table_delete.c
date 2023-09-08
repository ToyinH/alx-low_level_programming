#include "hash_tables.h"
/**
 * hash_table_delete - function that delete hash table
 * @ht: hash table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *ahead;

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			ahead = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = ahead;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

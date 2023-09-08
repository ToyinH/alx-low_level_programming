#include "hash_tables.h"
/**
 * hash_table_print - fuunction that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, word = 0;

	if (ht == NULL)
	{
		return;
	}

	i = 0;
	while (i < ht->size)
	{
		current = ht->array[i];
		if (word < 1)
		{
			while (current != NULL)
			{
				printf("{");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				word++;
				break;
			}
		}
		while (current != NULL)
		{
			printf(", '%s': '%s'", current->key, current->value);
			word++;
			current = current->next;
		}
		i++;
	}
	printf("}");
	printf("\n");
}

#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the hash table which is the array of pointers/nodes
 * Return: pointer to the hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	/* allocating space to the table and array of nodes within it*/
	/* using calloc sets each member pointer to zero or NULL */
	/* if malloc was used, you may need to iterate and set to NULL*/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}

#include "hash_tables.h"
/**
 * key_index - index of key
 * @key: key to find index for the hash table
 * @size: size of hash table
 *
 * Return: return index
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}

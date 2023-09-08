#include "hash_tables.h"

/**
 *  * hash_table_set - function that adds an element to the hash table.
 *   * @ht: the hash table to add or update the key/value to.
 *    * @key: the key. key cannot be an empty string.
 *     * @value: the value associated with the key. Value must be duplicated.
 *      *         Value can be an empty string.
 *       * Return: 1 if it succeeded, 0 otherwise.
 *        * In case of collision, add the new node at the end of the list.
 *         */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	    unsigned long int index;
	        hash_node_t *new_node, *current, *prev = NULL;

		    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
			            return (0);

		        index = key_index((const unsigned char *)key, ht->size);

			    current = ht->array[index];

			        /* Check for collisions and update the value if the key exists */
			        while (current != NULL)
					    {
						            if (strcmp(current->key, key) == 0)
								            {
										                /* Duplicate the value */
										                char *new_value = strdup(value);
												            if (new_value == NULL)
														                    return (0);

													                /* Free the old value and update with the new one */
													                free(current->value);
															            current->value = new_value;

																                return (1);
																		        }
							            prev = current;
								            current = current->next;
									        }

				    /* If the key doesn't exist, create a new node and add it at the end */
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

							    new_node->next = NULL;

							        /* If there is no collision, add new_node directly, else add it at the end */
							        if (prev == NULL)
									        ht->array[index] = new_node;
								    else
									            prev->next = new_node;

								        return (1);
}


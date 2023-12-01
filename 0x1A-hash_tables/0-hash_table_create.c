#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error - NULL.
 *         success - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int in;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (in = 0; in < size; in++)
		ht->array[in] = NULL;

	return (ht);
}

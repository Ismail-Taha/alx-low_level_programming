#include "hash_tables.h"

/**
 * key_index - Retrieves the index at which a key/value pair
 *             should be stored in the array of a hash table.
 * @key: The key for which to determine the index.
 * @size: The size of the array in the hash table.
 *
 * Return: The index where the key/value pair should be stored
 *         in the hash table array, calculated using the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

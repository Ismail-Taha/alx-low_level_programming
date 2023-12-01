#include "hash_tables.h"

/**
 * hash_table_set - function add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Returns: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element;
	char *value_cp;
	unsigned long int indx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_cp = strdup(value);
	if (value_cp == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (i = indx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cp;
			return (1);
		}
	}

	element = malloc(sizeof(hash_node_t));
	if (element == NULL)
	{
		free(value_cp);
		return (0);
	}
	element->key = strdup(key);
	if (element->key == NULL)
	{
		free(element);
		return (0);
	}
	element->value = value_cp;
	element->next = ht->array[indx];
	ht->array[indx] = element;

	return (1);
}

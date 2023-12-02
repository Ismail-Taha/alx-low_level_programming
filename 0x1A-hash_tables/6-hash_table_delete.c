#include "hash_tables.h"

/**
 * hash_table_delete - function deletes and frees a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *element, *element_cp;
	unsigned long int indx;

	for (indx = 0; indx < ht->size; indx++)
	{
		if (ht->array[indx] != NULL)
		{
			element = ht->array[indx];
			while (element != NULL)
			{
				element_cp = element->next;
				free(element->key);
				free(element->value);
				free(element);
				element = element_cp;
			}
		}
	}
	free(head->array);
	free(head);
}

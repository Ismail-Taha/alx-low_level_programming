#include "hash_tables.h"

/**
 * hash_table_print - function prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key/value pairs are printed in the order
 *              they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *element;
	unsigned long int indx;
	unsigned char separ = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (indx = 0; indx < ht->size; indx++)
	{
		if (ht->array[indx] != NULL)
		{
			if (separ == 1)
				printf(", ");

			element = ht->array[indx];
			while (element != NULL)
			{
				printf("'%s': '%s'", element->key, element->value);
				element = element->next;
				if (element != NULL)
					printf(", ");
			}
			separ = 1;
		}
	}
	printf("}\n");
}

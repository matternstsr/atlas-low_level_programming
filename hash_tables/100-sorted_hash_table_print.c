#include "hash_tables.h"

/**
* shash_table_print - Prints the sorted hash table.
* @ht: The sorted hash table.
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return ();

	current = ht->shead;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}

/**
* shash_table_print_rev - Prints the sorted hash table in reverse.
* @ht: The sorted hash table.
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (!ht)
		return ();

	current = ht->stail;
	printf("{");
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}
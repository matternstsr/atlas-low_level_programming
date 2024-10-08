#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	shash_table_t *ht;
	char *value;

	ht = shash_table_create(30);
	shash_table_set(ht, "USA", "Washington");
	shash_table_set(ht, "France", "Paris");
	shash_table_set(ht, "UK", "London");
	shash_table_set(ht, "Spain", "Madrid");
	shash_table_set(ht, "Germany", "Berlin");
	shash_table_set(ht, "China", "Beijing");
	shash_table_set(ht, "Russia", "Moscow");
	shash_table_set(ht, "Bahrain", "Manama");
	shash_table_set(ht, "Canada", "Ottawa");
	shash_table_set(ht, "Brazil", "Brasilia");
	shash_table_set(ht, "Sweden", "Stockholm");
	shash_table_set(ht, "Iceland", "Reykjavik");
	shash_table_set(ht, "Japan", "Tokyo");
	shash_table_set(ht, "Australia", "Canberra");

	value = shash_table_get(ht, "Canada");
	printf("%s:%s\n", "Canada", value);
	return (EXIT_SUCCESS);
}

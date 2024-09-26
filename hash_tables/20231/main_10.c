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
	char *value;

	value = shash_table_get(NULL, "USA");
	printf("%s:%s\n", "USA", value);
	return (EXIT_SUCCESS);
}

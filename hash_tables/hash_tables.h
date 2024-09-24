#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct shash_node_s
{
    char *key;                   /* The key, string */
    char *value;                 /* The value corresponding to a key */
    struct shash_node_s *next;   /* Pointer to the next node in the list */
    struct shash_node_s *sprev;  /* Pointer to the previous element in the sorted list */
    struct shash_node_s *snext;  /* Pointer to the next element in the sorted list */
} shash_node_t;

typedef struct shash_table_s
{
    unsigned long int size;      /* The size of the array */
    shash_node_t **array;        /* Array of pointers to the first node of the linked list */
    shash_node_t *shead;         /* Pointer to the first element of the sorted linked list */
    shash_node_t *stail;         /* Pointer to the last element of the sorted linked list */
} shash_table_t;

/* Function prototypes */
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);
unsigned long int hash_djb2(const unsigned char *str);  /* Prototype for hash function */
unsigned long int key_index(const unsigned char *key, unsigned long int size);



#endif /* HASH_TABLES_H */

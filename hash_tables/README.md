# Hash Tables Advanced

## Curriculum
**Course:** C#22 2023FA-TUL - LAB  
**Average Score:** 91.12%  
**Project Badge:** Hash Tables Advanced  
**Author:** Megan Radford  
**Weight:** 1  
**Status:** Migrated to checker v2

---

## Overview
This project focuses on implementing a sorted hash table in C, mimicking PHP's ordered hash tables. You will learn to create a data structure that maintains order while allowing for efficient data retrieval and storage.

---

## Data Structures

### `shash_node_t`
This structure represents a node in the sorted hash table, holding key-value pairs along with pointers for linked list management.

```c
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

```



# Hash Tables Advanced

## Curriculum
**Course:** C#22 2023FA-TUL - LAB  
**Average Score:** 91.12%  
**Project Badge:** Hash Tables Advanced  
**Author:** Megan Radford  
**Weight:** 1  
**Status:** Migrated to checker v2

---

## Overview
This project focuses on implementing a sorted hash table in C, mimicking PHP's ordered hash tables. You will learn to create a data structure that maintains order while allowing for efficient data retrieval and storage.

---

## Data Structures

### `shash_node_t`
This structure represents a node in the sorted hash table, holding key-value pairs along with pointers for linked list management.

### `shash_table_t`
This structure defines the sorted hash table itself, including an array of pointers to nodes and pointers to the head and tail of a sorted linked list.

---

## Tasks

### Mandatory Tasks

1. **Create a sorted hash table**:
   - Function: `shash_table_create`
   - Input: Size of the table.
   - Output: Pointer to the created hash table.

2. **Insert key-value pairs**:
   - Function: `shash_table_set`
   - Input: Hash table, key, value.
   - Output: 1 on success, 0 on failure.

3. **Retrieve a value by key**:
   - Function: `shash_table_get`
   - Input: Hash table, key.
   - Output: Value associated with the key.

4. **Print the hash table**:
   - Function: `shash_table_print`
   - Output: Print all key-value pairs in sorted order.

5. **Print the hash table in reverse**:
   - Function: `shash_table_print_rev`
   - Output: Print all key-value pairs in reverse sorted order.

6. **Delete the hash table**:
   - Function: `shash_table_delete`
   - Input: Hash table to be deleted.

---

## Compilation
To compile the project, use the following command:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht
```

## Usage

After compilation, run the executable to test the implementation:

```bash
./sht
```

This will demonstrate the functionality of the hash table by inserting and retrieving key-value pairs while printing the table in both sorted and reverse order.


## Repository Structure

    GitHub Repository: atlas-low_level_programming
    Directory: hash_tables
    File: 100-sorted_hash_table.c

## Notes

    Ensure you read the PHP Internals Book: HashTable to understand the underlying concepts.
    Use the same hash function provided in the course materials for consistent results.

    
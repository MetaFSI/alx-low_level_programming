#include "hash_tables.h"

/**
 * key_index - Getting index at which a key-value
 *      pairing should be stored in hash table array
 * @key: Key to get index of
 * @size: Array size of hash table
 *
 * Return: Key index
 * Description: Djb2 algorithm to be used
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

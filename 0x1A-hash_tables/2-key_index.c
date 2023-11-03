/*
 * File: 2-key_index.c
 * Auther: haven
*/

#include "hash_tables.h"

/**
 * key_index - Get the index which a key/value pair
 * be stored in array of a hash table.
 * @key: key to get the index of.
 * @size: size of the array of the hash table.
 *
 * Return: index of the key.
 *
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

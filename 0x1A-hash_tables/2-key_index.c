#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key.
 * @key: is the key or id of the hash
 * @size: is the size of the array of the hash table
 * Return: the index at which the key/value pair should
 * be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index = 0;
	unsigned long int i = 0;

	i = hash_djb2(key);
	key_index = i % size;
	return (key_index);
}

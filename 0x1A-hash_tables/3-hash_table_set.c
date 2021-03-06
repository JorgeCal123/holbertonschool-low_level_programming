#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value
 * @key: is the key
 * @value: is the value associated with the key
 * Return: one integer with the value od key
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{	hash_node_t *new, *tmp;
	unsigned long int index = 0;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = NULL;
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);

		}
		tmp = tmp->next;
	}
	new = NULL;
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->value = strdup(value);
	new->key = strdup(key);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

#include "lists.h"
/**
 * add_node -  function that adds a new node at the beginning
 * of a list_t list
 * @head: doble pointer of type list_t
 * @str: constant ponter type char
 * Return: new node of a list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int size_str = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[size_str])
		size_str++;

	new_node->len = size_str;
	new_node->next = *head;
	*head = new_node;
	return (*head);

}

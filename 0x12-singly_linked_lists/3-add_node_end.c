#include "lists.h"
/**
 * add_node_end - function that adds a new node at the
 * end of a list_t list.
 * @head: doble pointer of type list_t
 * @str: pointer type string
 * Return: pointer typi list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	int size = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[size])
		size++;

	new->str = strdup(str);
	new->len = size;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

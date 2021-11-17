#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete the node at
 * index of a `listint_t` list
 * @head: double pointer type listint_t
 * @index: is the index of the node that should be deleted
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *actual;
	listint_t *tmp;
	unsigned int i;

	i = 0;
	actual = *head;
	if (*head == NULL)
		return (-1);

	while (i < index)
	{
		i++;
		tmp = actual;
		if (actual->next)
			actual = actual->next;
		else
			return (-1);
	}

	if (index == 0)
		*head = actual->next;
	else if (actual->next)
		tmp->next = actual->next;
	else
		tmp->next = NULL;

	free(actual);
	return (1);
}


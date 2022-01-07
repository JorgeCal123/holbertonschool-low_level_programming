#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a
 * dlistint_t linked list.
 * @head: head type dlistint_t linked list.
 * @index: is the index of the node, starting from 0
 * Return: address of the node, or if it does not exist, NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		i++;
		head = head->next;
	}
	return (head);
}

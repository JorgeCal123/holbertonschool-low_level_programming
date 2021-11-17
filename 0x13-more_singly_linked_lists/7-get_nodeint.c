#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer type listint_t
 * @index: is the index of the node, starting at 0
 * Return: node type listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *node;

	while (n < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		n++;
	}
	return (head);
}

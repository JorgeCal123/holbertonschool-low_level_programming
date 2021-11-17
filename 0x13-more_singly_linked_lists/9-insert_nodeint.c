#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: doble pointer type listint_t
 * @idx: is the index of the list where the new node should
 * be added. Index starts at 0
 * @n: is value integer of node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;

	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (index == 0)
	{
		new->next = current;
		*head = new;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}

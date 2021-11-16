#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * @head: doble pointer type listint_t
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *cp_head;

	if (head == NULL || *head == NULL)
		return (0);
	cp_head = (*head)->next;
	node =  (*head)->n;
	free(*head);
	*head = cp_head;
	return (node);
}

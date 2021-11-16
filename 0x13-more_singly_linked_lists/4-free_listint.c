#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer type listint_t that have all nodes
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free(head->next);
	free(head->n);
	free(head);
}

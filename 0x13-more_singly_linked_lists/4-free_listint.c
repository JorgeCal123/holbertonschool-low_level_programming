#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer type listint_t that have all nodes
 */
void free_listint(listint_t *head)
{
	free(head);
	free(head->next);
}

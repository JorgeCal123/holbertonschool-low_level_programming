#include "lists.h"
/**
 * free_list -  function that frees a list_t list.
 * @head: list that free memory
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head);

}

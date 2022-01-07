#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - sums all of the data of a dlistint_t linked list
 * @head: head type dlistint_t linked list.
 * Return: sum of list, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

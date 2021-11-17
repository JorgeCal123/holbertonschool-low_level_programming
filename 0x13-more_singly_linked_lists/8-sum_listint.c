#include "lists.h"
/**
 * sum_listint -  function that do the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer type listint_t
 * Return: sum of all the data of nodes
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}

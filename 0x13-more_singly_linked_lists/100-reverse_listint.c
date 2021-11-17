#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: double pointer type listint_t
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *actual;

	if (*head == NULL)
		return (NULL);

	actual = *head;
	*head = actual->next;
	tmp = *head->next;
	actual->next = NULL;

	if (*head == NULL)
	{
		*head = actual;
		return (actual);
	}

	while (tmp != NULL)
	{
		(*head)->next = actual;
		actual = *head;

		*head = tmp;
		tmp = (*head)->next;
	}

	(*head)->next = actual;

	return (*head);
}


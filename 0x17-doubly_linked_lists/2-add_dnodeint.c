#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the
 * beginning of a dlistint_t list.
 * @head: type dlistint_t list.
 * @n: number type int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuevo;
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = *head;

	nuevo = malloc(sizeof(dlistint_t));
	if (nuevo == NULL)
		return (NULL);

	nuevo->n = n;
	if (tmp == NULL)
	{
		nuevo->prev = NULL;
		nuevo->next = *head;
		*head = nuevo;
	}
	else
	{
		nuevo->prev = tmp->prev;
		nuevo->next = tmp;
		*head = nuevo;
	}
	return (*head);
}

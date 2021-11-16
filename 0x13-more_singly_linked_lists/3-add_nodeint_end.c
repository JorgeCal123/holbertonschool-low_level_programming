#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list.
 * @head: new node
 * @n: value type integer
 * Return: a node type listint_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuevo;
	listint_t *ultimo;

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	nuevo->n = n;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}
	ultimo = *head;
	while (ultimo->next != NULL)
		ultimo = ultimo->next;


	ultimo->next = nuevo;

	return (ultimo);
}

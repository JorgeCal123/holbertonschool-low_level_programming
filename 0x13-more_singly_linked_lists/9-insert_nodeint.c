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
	listint_t *nuevo;
	listint_t *actual;
	listint_t *anterior;
	listint_t *siguiente;
	unsigned int posicion = 0;

	if (head == NULL)
		return (NULL);

	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
	{
		free(nuevo);
		return (NULL);
	}
	nuevo->n = n;
	actual = *head;
	while (actual != NULL)
	{
		if (idx == 0)
		{
			*head = nuevo;
			nuevo->next = actual;
			return (nuevo);
		}
		if (posicion == (idx - 1))
			anterior = actual;
		if (posicion == (idx))
			siguiente = actual;
		actual = actual->next;
		posicion++;
	}
	anterior->next = nuevo;
	if (siguiente != NULL)
		nuevo->next = siguiente;
	else
		nuevo->next = NULL;
	return (nuevo);
}


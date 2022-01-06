#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a
 * dlistint_t list.
 * @h: type dlistint_t list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t cont = 0;

	if (h == NULL)
		return (cont);
	tmp = h;

	while (tmp)
	{
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}

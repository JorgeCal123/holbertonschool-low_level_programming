#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: type dlistint_t list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t cont = 0;

	tmp = h;
	while (tmp)
	{
		cont++;
		tmp = tmp->next;
	}
	return (cont);
}

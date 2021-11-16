#include "lists.h"
/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: elements in a linked listint_t list.
 * Return: number of elements of list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++;
		h = h->next;
	}
	return (length);
}

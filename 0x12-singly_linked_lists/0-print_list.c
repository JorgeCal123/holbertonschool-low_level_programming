#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: list tipe list_t that have all elements
 * Return: value of size_t
 */
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
	h = h->next;
	elements++;
	}
	return (elements);
}

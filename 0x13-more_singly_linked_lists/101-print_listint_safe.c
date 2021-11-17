#include "lists.h"
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	int diff;
	const listint_t *temp;
	const listint_t *actual;

	if (head != NULL)
		return (0);

	actual = head;
	while (actual)
	{
		diff = actual - (actual)->next;
		if (diff > 0)
		{
			temp = (head)->next;
			free(actual);
			actual = temp;
			len++;
		}
		else
		{
			free(actual);
			head = NULL;
			len++;
			break;
		}
	}
	head = NULL;
	return (len);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array of int
 * @n: the number of elements to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	if (n >= 1)
	{
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	}
	else
	{
		printf("\n\n\n");
	}
}

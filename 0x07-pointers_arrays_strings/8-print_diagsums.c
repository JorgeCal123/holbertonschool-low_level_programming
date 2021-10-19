#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: pointer int
 * @size: size matriz
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diag1 = 0;
	int diag2 = 0;
	int s2 = size * size;

	for (i = 0; i < s2; i += size + 1)
	{
		diag1 += a[i];
	}
	for (i = size - 1; i < s2 - 1; i += size - 1)
	{
		diag2 += a[i];
	}
	printf("%d, %d\n", diag1, diag2);
}

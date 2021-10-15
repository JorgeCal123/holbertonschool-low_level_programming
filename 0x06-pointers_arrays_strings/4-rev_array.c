#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: first integer
 * @n: size integer
 */
void reverse_array(int *a, int n)
{
	int k;
	int tmp;

	for (k = n - 1; k >= n / 2; k--)
	{
		tmp = a[k];
		a[k] = a[n - k - 1];
		a[n - k - 1] = tmp;
	}
}

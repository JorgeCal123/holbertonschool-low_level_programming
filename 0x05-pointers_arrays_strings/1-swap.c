#include "main.h"
#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * @a: value a
 * @b: value b
 */
void swap_int(int *a, int *b)
{
	int tempA = *a;
	int tempB = *b;
	*a = tempB;
	*b = tempA;
}

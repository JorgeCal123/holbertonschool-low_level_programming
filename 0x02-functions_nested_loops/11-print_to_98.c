#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: limit number that prints
 */
void print_to_98(int n)
{
	int i, j;

	if (n == 98)
	{
		printf(n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
			printf(i);
	}
	else
	{
		for (j = 98; i <= 98 ; j++)
			printf(j);
	}
}

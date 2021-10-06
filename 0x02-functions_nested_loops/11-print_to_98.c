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
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
		if (i != 98)
			printf(",");
		printf(" ");
		}
	}
	else
	{
		for (j = n; j >= 98 ; j--)
		{
			printf("%d", j);
		if (j != 98)
			printf(",");
		printf(" ");
		}
	}
}

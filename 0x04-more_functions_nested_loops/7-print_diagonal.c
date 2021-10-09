#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: n is the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 1; j <= (i + 1); j++)
		{
			if (j != (i + 1))
				_putchar(' ');
			else
				_putchar('\\');

		}
	_putchar('\n');
	}
	}
}

#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 */
void print_triangle(int size)
{
	int i, j;
	int k = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (k <= j)
			{
				_putchar('#');
			}
			else
				_putchar(' ');
		}
		k--;
		_putchar('\n');
	}
	}
}

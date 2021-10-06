#include <stdio.h>
/**
 * print_to_98 - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0
 * @n: size of table
 */
void print_to_98(int n)
{
	int i, j, k;

	if (n < 15 || n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			for (j = 1; j < n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				if (j < 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}

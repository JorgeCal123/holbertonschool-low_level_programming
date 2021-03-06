#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * If n is greater than 15 or less than 0
 * @n: size of table
 */
void print_times_table(int n)
{
	int i, j, k, l;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				if (j <= n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (k < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10 && k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					l = k / 10;
					_putchar((l / 10) + '0');
					_putchar((l % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
		_putchar('\n');
		}
	}
}

#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j;

	while (i < 10)
	{
		while (j < 10)
		{
			_putchar((i * j) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}

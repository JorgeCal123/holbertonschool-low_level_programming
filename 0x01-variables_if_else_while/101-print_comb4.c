#include <stdio.h>
/**
 * main - print
 * Return: Always 0 (Success)
 */

int main(void)
{
	int cont1;
	int cont2;
	int cont3;

	for (cont1 = 0 ; cont1 < 9 ; cont1++)
	{
		for (cont2 = cont1 + 1 ; cont2 <= 8; cont2++)
		{
			for (cont3 = cont2 + 1 ; cont3 <= 9 ; cont3++)
			{
				putchar(cont1 + '0');
				putchar(cont2 + '0');
				putchar(cont3 + '0');
				if (cont1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cont1;
	int cont2;
	int tmp = 1;
	for (cont1 = 0 ; cont1 < 9 ; cont1 ++)
	{
		for (cont2 = tmp ; cont2 <= 9 ; cont2 ++)
		{	
			putchar(cont1 + '0');
			putchar(cont2 + '0');
			if (cont1 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
		tmp++;	
	}
	putchar('\n');
	return (0);
}

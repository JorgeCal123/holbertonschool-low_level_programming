#include <stdio.h>
/**
 * main - print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cont = 0;

	while (cont <= 9)
	{
		putchar(cont + '0');
		if (cont != 9)
		{
		putchar(',');
		putchar(' ');
		}
	cont++;
	}
	putchar('\n');
	return (0);
}

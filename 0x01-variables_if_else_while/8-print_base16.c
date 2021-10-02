#include <stdio.h>
/**
 * main - print
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;        
	char letter1 = 'a';

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	while (letter1 <= 'f')
	{
		putchar(letter1);
		letter1++;
	}
	putchar('\n');
	return (0);
}

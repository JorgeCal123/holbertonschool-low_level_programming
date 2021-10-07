#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * Return: value 0
 */
int main(void)
{
	int i;
	int a = 1;
	int s = 1;
	int temp;

	for (i = 0; i <= 50; i++)
	{
		printf("%d ", a);
		temp = a;
		a = s;
		s = temp + s;
	}
	return (0);
}

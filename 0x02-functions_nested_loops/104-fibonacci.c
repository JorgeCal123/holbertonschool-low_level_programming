#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers
 * Return: value 0
 */
int main(void)
{
	int i;
	unsigned long a = 1;
	unsigned long s = 2;
	unsigned long temp;

	for (i = 0; i <= 98; i++)
	{
		if (i < 97)
			printf("%lu, ", a);
		else
			printf("%lu\n", a);
	temp = a;
	a = s;
	s = temp + s;
	}
	return (0);
}

#include <stdio.h>
/**
 * main -  finds and prints the first 98 Fibonacci numbers
 * Return: value 0
 */
int main(void)
{
	int i;
	long a = 1;
	long s = 2;
	long temp;

	for (i = 0; i <= 98; i++)
	{
		if (i < 97)
			printf("%ld, ", a);
		else
			printf("%ld\n", a);
	temp = a;
	a = s;
	s = temp + s;
	}
	return (0);
}

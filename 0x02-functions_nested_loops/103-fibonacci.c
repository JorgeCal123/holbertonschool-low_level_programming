#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms,
 * followed by a new line limit 4000000.
 * Return: value 0
 */
int main(void)
{
	unsigned long i;
	unsigned long a = 1;
	unsigned long s = 1;
	unsigned long temp;
	long suma;
	
	for (i = 0; i < 4000000; i++)
	{
		if ((a % 2) == 0)
		{
			if (a < 4000000)
			suma += a;
		}
		temp = a;
		a = s;
		s = temp + s;
	}
	printf("%ld\n", suma);
return (0);
}

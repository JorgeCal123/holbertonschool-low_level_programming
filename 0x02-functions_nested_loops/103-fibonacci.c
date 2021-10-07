#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms, followed by a new line.
 * Return: value 0
 */
int main(void)
{
	long i;
	long a = 1;
	long s = 1;
	long temp;
	long suma;
	for(i=0; i<=4000000; i++)
	{	
		if ((a % 2) == 0)
		{
			suma += a;
		}
		temp = a;
		a = s;
		s = temp + s;
	}
	printf("%ld\n", suma);
return (0);
}

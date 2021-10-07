#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 */
int main(void)
{
	int i = 0;
	int suma;

	while(i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			suma += i;
		}
	i++;
	}
	printf("%d ", suma);
	return (0);
}

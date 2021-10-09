#include <stdio.h>
/**
* main - check the code
* Return: Always 0.
*/
int main(void)
{
	long i;
	long number = 612852475143;
	long mayor = 1;

	for (i = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			if (i > mayor)
				mayor = i;
			i = 2;
		}
	}
	printf("%lu\n", mayor);
	return (0);
}

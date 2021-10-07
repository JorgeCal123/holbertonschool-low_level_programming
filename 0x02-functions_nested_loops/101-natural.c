#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 */
void main(void)
{
	int i = 0;

	while(i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			printf("%d ", i);
		}
	i++;
	}
}

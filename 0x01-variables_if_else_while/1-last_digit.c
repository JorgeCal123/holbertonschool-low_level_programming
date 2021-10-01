#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - print
 * 
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int num = n%10;

	if (num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, num);
	else if (num < 6)
	{
		printf("Last digit of %d is %d and is less than 6\n",n, num);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",n, num);
	}

	return (0);
}

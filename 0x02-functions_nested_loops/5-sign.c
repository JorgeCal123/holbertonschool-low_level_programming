#include "main.h"
/**
 * print_sign -  prints the sign of a number.
 * @n: sign of a number
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	int answer;

	if (n == 0)
	{
		_putchar('0');
		answer = (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		answer = (-1);
	}
	else
	{
		_putchar('+');
		answer = (1);
	}
	return (answer);
}

#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @a: input value
 *
 * Return: the value of the last digit
 */
int print_last_digit(int a)
{
	int op = a % 10;

	if (op < 0)
		op = op * (-1);
	_putchar(op + '0');
	return (op);
}

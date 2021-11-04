#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: constant type char
 * @n: is the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_number;
	unsigned int i = 0;
	int arg;

	va_start(list_number, n);
	while (i < n)
	{
		arg = va_arg(list_number, int);
		if (i <= n - 1)
			printf("%d%s", arg, separator);
		else
			printf("%d\n", arg);
		i++;
	}
	va_end(list_number);
}

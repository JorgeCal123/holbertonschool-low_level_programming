#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_string;
	unsigned int i = 0;
	char *arg;

	va_start(list_string, n);
	while (i < n)
	{
		arg = va_arg(list_string, char *);
		if (!arg)
			printf("(nil)");
		if (i != n - 1 && separator != NULL)
			printf("%s%s", arg, separator);
		else
			printf("%s", arg);
		i++;
	}
	va_end(list_string);
	printf("\n");
}

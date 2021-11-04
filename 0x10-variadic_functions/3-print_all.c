#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_all - function that prints anything.
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list_all;
	int i = 0, arg_i, size = strlen(format), imp;
	char arg_c;
	float arg_f;
	char *arg_s;

	va_start(list_all, format);
	while (format[i])
	{
		imp = 1;
		switch (format[i])
		{
		case 'c':
			arg_c = va_arg(list_all, int);
			printf("%c", arg_c);
			break;
		case 'i':
			arg_i = va_arg(list_all, int);
			printf("%d", arg_i);
			break;
		case 'f':
			arg_f = va_arg(list_all, double);
			printf("%f", arg_f);
			break;
		case 's':
			arg_s = va_arg(list_all, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s", arg_s);
			break;
		default:
			imp = 0;
			break;
		}
		if (i < size - 1 && imp == 1)
			printf(", ");
	i++;
	}
	printf("\n");
	va_end(list_all);
}

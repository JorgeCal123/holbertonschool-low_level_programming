#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of parameters
 * Return: sum of all its parameters
 */
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i = 0;
	int arg;
	va_list list_args;

	va_start(list_args, n);
		while (i < n)
		{
			arg = va_arg(list_args, int);
			total += arg;
			i++;
		}
	va_end(list_args);
	return (total);
}

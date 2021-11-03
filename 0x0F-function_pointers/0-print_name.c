#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - function that prints a name.
 * @name: char pointer type char
 * @f: function pointer that takes a string argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
	(*f)(name);
}

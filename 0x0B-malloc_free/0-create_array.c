#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: lenght of arrays
 * @c: value type char
 * Return: pointer char
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size != 0 && p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	else
		return (NULL);
}

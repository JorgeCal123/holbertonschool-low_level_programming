#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: pointer type char
 * Return: pointer to the duplicated string or NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int size = strlen(str) + 1;

	p = malloc(sizeof(char) * size);
	if (size != 0 && str != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = str[i];
		return (p);
	}
	else
		return (NULL);
}

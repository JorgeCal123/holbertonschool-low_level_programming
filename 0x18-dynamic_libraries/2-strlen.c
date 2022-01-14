#include "main.h"
#include <stdio.h>
/**
 * _strlen - function that returns the length of a string.
 * @s: Pointers or arrays
 * Return: length of a string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

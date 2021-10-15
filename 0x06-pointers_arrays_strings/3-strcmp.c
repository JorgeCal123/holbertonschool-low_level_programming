#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: first String
 * @s2: Second String
 * Return: integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int answer = 0;
	
	if (*s1 != *s2)
	{
		answer = *s1 - *s2;
	}

	return (answer);

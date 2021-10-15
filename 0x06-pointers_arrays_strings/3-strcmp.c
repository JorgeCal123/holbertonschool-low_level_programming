#include "main.h"
/**
 * _strcmp -  compares two strings.
 * @s1: first String
 * @s2: Second String
 * Return: integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int answer = 0;
	int stop = 1;

	while (s1[i] != '\0' && s2[i] != '\0' && stop)
	{
		if (s1[i] != s2[i])
		{
			answer = *s1 - *s2;
			stop = 0;
		}
		i++;
	}
	return (answer);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: pointer type char
 * @s2: pointer type char
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of
 * s2, and null terminated
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j;
	int size_s1 = 0;
	int size_s2 = 0;

	if (s1 != NULL)
		size_s1 = strlen(s1);
	if (s2 != NULL)
		size_s2 = strlen(s2);
	p = malloc(sizeof(char) * (size_s1 + size_s2) + 1);
	if (p != NULL)
	{
	for (i = 0; i < size_s1; i++)
	{
		p[i] = s1[i];
	}
	i = 0;
	for (j = size_s1; j < (size_s1 + size_s2); j++)
	{
		p[j] = s2[i];
		i++;
	}
	return (p);
	}
	else
		return (NULL);
}

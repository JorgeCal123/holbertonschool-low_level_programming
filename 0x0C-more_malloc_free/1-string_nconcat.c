#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first pointer
 * @s2: second pointer
 * @n: size of pointer
 * Return: pointer tipe char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	unsigned int size2 = 0;
	char *p;
	unsigned int len, i, j;

	if (s1 != NULL)
	{
		size1 = strlen(s1);
	}
	if (s2 != NULL)
	{
		if (n < strlen(s2))
			size2 = n;
		else
			size2 = strlen(s2);
	}	
	p = malloc((size2 + size1) * sizeof(char) + 1);
	len = size1 + size2;
	if (p == NULL)
		return (NULL);
	if (p != NULL)
	{
		for (i = 0; i < size1; i++)
			p[i] = s1[i];
		i = 0;
		for (j = size1; j < len; j++)
		{
		p[j] = s2[i];
		i++;
		}
	return (p);
	}
	else
		return (NULL);
}

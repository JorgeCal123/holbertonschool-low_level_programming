#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer char
 * @accept: pointer char
 * Return: lenght of prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, k;
	unsigned int res = 0;

	while (accept[i] != '\0')
		i++;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (k = 0; k <= i; k++)
		{
			if (s[j]) == accept [k]
				res++;
		}
	}
	return (res);
}

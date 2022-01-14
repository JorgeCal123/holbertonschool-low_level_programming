#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: pointer char
 * @accept: pointer char
 * Return: lenght of prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, k;
	unsigned int res = 0;
	int continuar1 = 1;
	int continuar2 = 1;

	for (j = 0; s[j] != '\0' && continuar1; j++)
	{
		continuar2 = 1;

		for (k = 0; accept[k] != '\0' && continuar2; k++)
		{
			if (s[j] == accept[k])
			{
				res++;
				continuar1 = 1;
				continuar2 = 0;
			}
			else
				continuar1 = 0;
		}
	}
	return (res);
}

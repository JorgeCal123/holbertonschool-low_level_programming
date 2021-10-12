#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer char
 */
void rev_string(char *s)
{
	int i = 0;
	int k = 0;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}

	for (k = i - 1; k >= i / 2; k--)
	{
		tmp = s[k];
		s[k] = s[i - k - 1];
		s[i - k - 1] = tmp;
	}
}

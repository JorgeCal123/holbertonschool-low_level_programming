#include "main.h"
/**
 * leet - unction that encodes a string into 1337.
 * @s: pointer char
 * Return: pointer char
 */
char *leet(char *s)
{
	char *letter1 = "aeotl"
	char *letter2 = "AEOTL"
	char *num = "43071";
	int i = 0;
	int j = 0;

	while (s[j] != '\0')
	{
		while (i < 5)
		{
		if (s[i] == letter1[i] || s[i] == letter2[i])
			s[i] = num[i];
		i++;
		}
		j++;
	}
	return (s);
}

#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: pointer char
 * @needle: pointer char
 * Return: pointer char
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
	if (!needle[j])
		return (&haystack[i]);
	}
	return (0);
}

#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer char
 * @c: value char
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	int find = 1;

	while (*s && find)
	{
		if (s[i] == c)
		{
			s = (&s[i]);
			find = 0;
		}
		i++;
	}
	if (find == 0)
		return (s);
	else
		return (0);
}

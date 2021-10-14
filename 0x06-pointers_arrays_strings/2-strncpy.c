#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: first string 
 * @src: second String
 * @n: size en bytes
 * Return: pointer char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;
	while (dest[i] != '\0')
		i++;

	if (i < n)
	{
		while (src[j] != '\0')
		{
		dest[j] = src[j];
		j++;
		}
	}
	else
	{
		while (k < n)
		{
			dest[k] = src[k];
			k++;
		}
	}
	return (dest);
}

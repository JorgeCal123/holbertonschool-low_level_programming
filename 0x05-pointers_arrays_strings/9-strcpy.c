#include "main.h"

/**
 * _strcpy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest.
 * @dest: pointer
 * @src: The source string to copy.
 * Return: pointer destination dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

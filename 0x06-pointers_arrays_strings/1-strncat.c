#include "main.h"
/**
 * _strncat - concatenates two strings with n size (bytes)
 * @dest: first pointer char
 * @src: second pointer char
 * @n: size in bytes
 * Return: pointer char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (n != j)
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		else
			break;

	}
	dest[i] = '\0';
	return (dest);
}

#include "main.h"
/**
 * _strncat - concatenates two strings with n size (bytes)
 * @dest: first pointer char
 * @src: second pointer char
 * @int: size in bytes
 * Return pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		if (n == j)
			break;
		else
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

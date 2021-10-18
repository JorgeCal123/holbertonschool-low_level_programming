#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer char to modify
 * @src: pointer char to add
 * @n: size unsigned int
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

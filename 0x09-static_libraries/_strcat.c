#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 * @dest: first string to overwrite
 * @src: second string to add
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}

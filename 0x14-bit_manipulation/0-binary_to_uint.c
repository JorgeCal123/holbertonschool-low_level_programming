#include "main.h"
/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	while (s[i] != '\0')
		i++;
	return (i - 1);
}

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 * @b: value how binary
 * Return: value in decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = _strlen(b);
	int ope = 1;

	if (b == NULL)
		return (0);

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal += ope;
		ope *= 2;

	i--;
	}
	return (decimal);
}

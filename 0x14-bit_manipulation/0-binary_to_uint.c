#include "main.h"
/**
 * _strlen - calculates the length of the string
 * @s: input
 * Return: length of string
 */
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

/**
 * _pow - function that do operations with potency
 * @n: base number
 * @p: exponent number
 * Return: potency
 */
unsigned int _pow(unsigned int n, unsigned int p)
{
	int resultado = n;

	if (p == 0)
		return (1);
	while (p > 1)
	{
		resultado = resultado * n;
		p--;
	}
	return (resultado);
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
	int i = _strlen(b) - 1;
	int a = 2;
	int exp = 0;

	if (b == NULL)
		return (0);

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			decimal += _pow(a, exp);

	i--;
	exp++;
	}
	return (decimal);
}

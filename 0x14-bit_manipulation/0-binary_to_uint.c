#include "main.h"
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
	int i = strlen(b) - 1;
	int a = 2;
	int exp = 0;

	if (!b)
		return (0);

	while (i >= 0)
	{
		if (b[i] >= '0' && b[i] <= '1')
		{
		if (b[i] == '1')
			decimal += _pow(a, exp);
		}
		else
			return (0);
	i--;
	exp++;
	}
	return (decimal);
}

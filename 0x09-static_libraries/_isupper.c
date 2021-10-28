#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char inicio;
	int resp;
	int final = 0;

	for (inicio = 'A'; inicio <= 'Z' && final == 0; inicio++)
	{
		if (c == inicio)
		{
			resp = 1;
			final = 1;
		}
		else
		{
			resp = 0;
		}
	}
	return (resp);
}

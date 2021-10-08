#include "main.h"
/**
 * _isupper - Write a function that checks for uppercase character.
 * @c: character
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(char c)
{
	char inicio;
	int resp;
	int fin = 0;

	for (inicio = 'A'; inicio 'Z' && fin == 0; inicio++)
	{
		if (c == inicio)
		{
			resp = 1;
			fin = 1;
		}
		else
		{
			resp = 0;
		}
	}
	return (resp);
}

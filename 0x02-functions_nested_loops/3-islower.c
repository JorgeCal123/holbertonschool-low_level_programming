#include "main.h"
/**
 *_islower - function that checks for lowercase character
 * @c: First operand
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	int answer;

	if (c > 'a' && c < 'z')
		answer = 1;
	else
		answer = 0;
	return (answer);
}

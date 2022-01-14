#include "main.h"
/**
 * _isdigit -  checks for a digit.
 * @c: int for check
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int answer;

	if (c >= 48 && c <= 57)
		answer = 1;
	else
		answer = 0;
	return (answer);
}

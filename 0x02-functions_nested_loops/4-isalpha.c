#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: character 
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha (int c)
{
	int answer;

	if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z'))
	{
		answer = 1;
	}
	else{
		answer = 0;
	}
	return(answer);
}

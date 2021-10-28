#include "main.h"
/**
 * _abs -  computes the absolute value of an integer
 * @a: voalu or integer
 * Return: absolute value
 */
int _abs(int a)
{
	int answer = a;

	if (a < 0)
	{
		answer = a * (-1);
	}
	return (answer);

}

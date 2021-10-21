#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: value integer
 * Return: if n does not have a natural square root,
 * the function should return -1
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if(n == 2)
		return (-1);
	else
		return (_rt(n, 0, 0));
}

int _sqrt(int n, int total, int nump)
{
	if (n == 1)
		return(total);

	return (_sqrt(n - 1, total¨* nump));

}

int _rt(int valor, int cant, int numP)
{
	if(valor == 1)
		return (_sqrt(cant / 2, 2, numP));
	if(valor % 2 == 0)
		return (_rt( valor / 2 ,cant + 1), 2);
	else if(valor % 3 == 0)
		return (_rt( valor / 2 ,cant + 1), 3);
	else
                return (_rt( valor / 2 ,cant + 1), 5);
}

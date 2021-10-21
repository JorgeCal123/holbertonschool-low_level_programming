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
	if(n <= 0)
		return (-1);
	else
		return (_root(n, 2));
}

int _root(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		return (_root(n, root + 1));

}


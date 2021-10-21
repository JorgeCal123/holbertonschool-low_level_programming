#include "main.h"
/**
 * is_prime_number - print if is a prime number
 * @n: volue integer
 * Return: returns 1 if the input integer is a prime number,
 * otherwise return 0.
 */
int is_prime_number(int n)
{
int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_div(n, div));
}

/**
 * is_div - looking for if the number is divisible
 * @n: value integer
 * @d: value integer
 * Return: 0 if is divisible and 1 if not is divisible
 */

int is_div(int n, int d)
{
	if (n % d == 0)
		return (0);

	if (d == n / 2)
		return (1);

	return (is_div(n, d + 1));
}

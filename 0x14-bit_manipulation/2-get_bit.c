#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number type unsigned long int
 * @index: is the index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int number;

	number = (n >> index) & 1;

	if ((number == 1) || (number == 0))
		return (number);
	else
		return (-1);
}

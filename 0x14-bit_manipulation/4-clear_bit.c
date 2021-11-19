#include "main.h"
/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: number type unsigned long int
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);
	
	bits = 1 << index;
	if ((bits | *n) == *n)
		*n = *n ^ bits;
	return (1);
}

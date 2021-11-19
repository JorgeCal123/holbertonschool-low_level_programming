#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: value type unsigned long int
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits;

	if (n == NULL)
		return (-1);
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	bits = 1 << index;
	*n = *n | bits;
	return (1);
}

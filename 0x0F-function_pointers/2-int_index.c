#include "function_pointers.h"
/**
  * int_index - function that searches for an integer
  * @array: pointer type int
  * @size: is the number of elements in the array
  * @cmp: is a pointer to the function to be used to compare values
  * Return: index of the first element found
  * or If no element matches, return -1
  * If size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !(array) || !(cmp))
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
	i++;
	}
	return (-1);
}

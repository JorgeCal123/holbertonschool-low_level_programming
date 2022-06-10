#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int i, first = 0;
	int last = size - 1;
	int half;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		half = (last + first) / 2;
		if (array[half] == value)
			return (half);
		else if (array[half] < value)
			first = half + 1;
		else if (array[half] > value)
			last = half - 1;
	}
	return (-1);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  function that creates an array of integers.
 * @min: minimum amount
 * @max: maximum amount
 * Return: pointer type integer
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j = min;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		p[i] = j;
		j++;
	}
	return (p);
}

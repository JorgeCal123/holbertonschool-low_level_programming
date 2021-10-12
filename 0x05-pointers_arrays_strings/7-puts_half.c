#include "main.h"
#include <stdio.h>

/**
 * puts_half - print the second half of the string
 * @str:  pointer char
 */
void puts_half(char *str)
{
	int i = 0, j;
	int half;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
		half = i / 2;
	else
		half = (i + 1) / 2;

	for (j = half; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}


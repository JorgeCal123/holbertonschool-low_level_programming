#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with
 * the first character, followed by a new line.
 * @str: pointer of char
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
		i++;

	for (j = 0; j < i; j += 2)
		_putchar(str[j]);

	_putchar('\n');

}

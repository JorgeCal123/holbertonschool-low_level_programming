#include "main.h"
/**
 * 10 x alphabet - prints 10 times the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet_x10()
{
	int i;
	char j;

	for (i=0 ; i < 10 ; i++)
	{
		for (j='a' ; j <= 'z' ; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}

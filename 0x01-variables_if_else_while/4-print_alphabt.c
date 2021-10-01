#include <stdio.h>
/**
 * main - print
 * Return: Always 0 (Success)
 */
int main(void)
{
        char letter1 = 'a';
        char letter2 = 'z';

        while (letter1 <= letter2)
        {
		if (letter1 != 'q' && letter1 != 'e')
                putchar(letter1);
                letter1++;
        }
        putchar('\n');
        return (0);
}

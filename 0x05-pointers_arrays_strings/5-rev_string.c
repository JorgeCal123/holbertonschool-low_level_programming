#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s: pointer char
 */
void rev_string(char *s)
{
	int i = 0;
        int j;
	int k = 0;

        while (s[i] != '\0')
        {
                i++;
        }
	char temp1[i];

	for (k = 0; k < i; k++ )
	{
		temp1[k] = s[k];
	}
	k = 0;
        for (j = i - 1; j >= 0 ; j--)
        {
		s[k] = temp1[j];
	k++;
	}
}

#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * @s: pointer char
 * Return: pointer char
 */
char *cap_string(char *s)
	{
	char cadena[] ={',', ';', '.', '!', '?', '(', ')', '"', '{', '}', ' ', '\n', '\t'};
	int i;
	int j;
	
	for (i = 0 ;s[i] != '\0'; i++)
	{
		for (j = 0;cadena[j] != '\0'; j++)
		{
			if(s[i] == cadena[j])
			{
				if(s[i + 1] >= 'a' && s[i+1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}	
		}
	}
return (s);
}

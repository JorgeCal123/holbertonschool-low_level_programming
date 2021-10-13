#include "main.h"
/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: into value String
 * Return: convert to integer
 */
int _atoi(char *s)
{
	int resultado = 0;
	int signo = 1;
	int parte1 = 0;
	int parte2 = 0;
	int i = 0;
	int terminar = 1;

	while (s[i] != '\0' && terminar)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (i != 0)
			{
				if (s[i - 1] == '-')
				signo *= -1;
			}
				parte1 = resultado * 10;
				parte2 = (s[i] - '0');
				resultado = (parte1 + parte2);
		}
		else if (resultado > 0)
			terminar = 0;
	i++;
	}
	return (signo * resultado);
}

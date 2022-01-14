#include "main.h"
/**
 * _atoi - Write a function that convert a string to an integer.
 * @s: into value String
 * Return: convert to integer
 */
int _atoi(char *s)
{
	unsigned int resultado = 0;
	int signo = 1;
	unsigned int parte1 = 0;
	unsigned int parte2 = 0;
	int i = 0;
	int terminar = 1;

	while (s[i] != '\0' && terminar)
	{
		if (s[i] == '-')
			signo *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
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

#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: value 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	return (0);
	}
}

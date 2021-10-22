#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the number of arguments passed into it.
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: value 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

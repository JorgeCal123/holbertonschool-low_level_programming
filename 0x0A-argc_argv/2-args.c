#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all arguments it receives.
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: value 0
 */
int main(int argc, char *argv[])
{
	while(argc--)
		printf("%s\n", *argv++);
	return (0);
}

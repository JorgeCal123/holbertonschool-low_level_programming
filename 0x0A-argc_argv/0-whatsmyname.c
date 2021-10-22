#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints its name, followed by a new line.
 * @argc: The size of the argv array
 * @argv: An array containing the program command line arguments
 * Return: value 0
 */
int main(int argc, char* argv[])
{
	printf("%s\n",argv[0]);
	return (argc);
}

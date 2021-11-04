#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * main - function main
  * @argc: size of
  * @argv: pinter type char
  * Return: value of operation
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);
	int resultado;

	if (argc != 4)
	{
		printf("Error\n");
		exit(99);
	}

	oprt = get_op_func(argv[2]);
	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}
	resultado = oprt(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", resultado);
	return (0);
}

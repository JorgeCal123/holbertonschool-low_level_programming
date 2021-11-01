#include <stdio.h>
/**
 * main - print the name of the file it was compiled from
 * Return: value 0
 */
int main(void)
{
	printf("%s\n",  __FILE__);
	return (0);
}

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef BUF_SIZE
#define BUF_SIZE 1024
#endif
/**
 * errorWrite - close error in the write
 * @inputFd: first arg in open
 * @outputFd: second arg in open
 */
void errorWrite(int inputFd, int outputFd)
{
	if (close(inputFd) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", inputFd);
	exit(100);
	}

	if (close(outputFd) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", outputFd);
	exit(100);
}

}
/**
 * main - Copies the content of a file to another file.
 * @argc: Argument with count
 * @argv: argument with values
 * Return: value of exit
 */
int main(int argc, char *argv[])
{
	int inputFd, outputFd, openFlags, writefile;
	mode_t filePerms;
	ssize_t numRead;
	char buf[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	openFlags = O_CREAT | O_WRONLY | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	outputFd = open(argv[2], openFlags, filePerms);
	if (outputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((numRead = read(inputFd, buf, BUF_SIZE)) > 0)
	{
		if (numRead == -1)
			errorWrite(inputFd, outputFd);

		writefile = write(outputFd, buf, numRead);
		if (writefile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	errorWrite( inputFd, outputFd);
	exit(EXIT_SUCCESS);
}

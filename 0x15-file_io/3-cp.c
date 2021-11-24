#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#ifndef BUF_SIZE /* Allow "cc -D" to override definition */
#define BUF_SIZE 1024
#endif
/**
 * main - Copies the content of a file to another file.
 * @ac: Argument count
 * @av: argument values
 * Return: value of exit
 */
int main(int argc, char *argv[])
{
	int inputFd, outputFd, openFlags, writefile;
	mode_t filePerms;
	ssize_t numRead;
	char buf[BUF_SIZE];

	if (argc != 3 )
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Open input and output files */
	inputFd = open(argv[1], O_RDONLY);
	if (inputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	openFlags = O_CREAT | O_WRONLY | O_TRUNC;
	filePerms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |S_IROTH; 
	/* rw-rw-r- */
	outputFd = open(argv[2], openFlags, filePerms);
	if (outputFd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* Transfer data until we encounter end of input or an error */
	while ((numRead = read(inputFd, buf, BUF_SIZE)) > 0)
	{
		 if (numRead == -1)
        	{
                	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
                        if (close(inputFd) == -1)
			{
				dprintf(2, "Error: Can't close fd %d\n", inputFd);
				exit(100);
			}

			if (close(outputFd) == -1)
			{
			dprintf(2, "Error: Can't close fd %d\n", outputFd);
			exit(100);
			}
       		}

		writefile = write(outputFd, buf, numRead);
		if (writefile == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
		if (close(inputFd) == -1)
                        {
                                dprintf(2, "Error: Can't close fd %d\n", inputFd);
                                exit(100);
                        }

                        if (close(outputFd) == -1)
                        {
                        dprintf(2, "Error: Can't close fd %d\n", outputFd);
                        exit(100);
                        }


	exit(EXIT_SUCCESS);
}

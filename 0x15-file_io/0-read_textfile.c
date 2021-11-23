#include "main.h"
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: text file
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes,
 * return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_open;
	ssize_t file_read;
	char *save =  malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);

	file_open = open(filename, O_RDONLY);
	if (file_open == -1)
		return (0);

	file_read = read(file_open, save, letters);
	if (file_read == 0)
		return (0);

	write(STDOUT_FILENO, save, file_read);
	close(file_open);
	free(save);
	return (file_read);
}

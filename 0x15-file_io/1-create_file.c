#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_open;
	int file_write;
	int size = 0;

	if (filename == NULL)
		return (-1);

	file_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_open == -1)
		return (-1);

	while (text_content)
		size++;

	file_write = write(file_open,text_content,size);
	if (file_write == -1)
		return (-1);

	close(file_open);
	return (1);
}

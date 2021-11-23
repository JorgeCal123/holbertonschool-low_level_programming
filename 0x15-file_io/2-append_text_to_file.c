#include "main.h"
/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_open;
	int file_write;
	int size = 0;

	if (filename == NULL)
		return (-1);

	file_open = open(filename, O_WRONLY | O_APPEND);
	if (file_open == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[size])
		size++;

	file_write = write(file_open, text_content, size);
	close(file_open);
	if (file_write == -1)
		return (-1);
	return (1);
}


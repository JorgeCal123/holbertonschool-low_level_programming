#ifndef MAIN_H
#define MAIN_H
/*libraries standar*/
#include <stddef.h>
#include <stdlib.h>
/*libraries file io*/
#include <fcntl.h>
#include <unistd.h>
/*prototypes Mandatory*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif

#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define EXIT97 "Usage: cp file_from file_to\n"
#define EXIT98 "Error: Can't read from file %s\n"
#define EXIT99  "Error: Can't write to %s\n"
#define EXIT100 "Error: Can't close fd %d\n"
 
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* _HOLBERTON_H_ */

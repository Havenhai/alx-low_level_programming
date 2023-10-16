#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename_havu, size_t letters_havu);
int create_file(const char *filename_havu, char *text_content_havu);
int append_text_to_file(const char *filename_havu, char *text_content_havu);

#endif

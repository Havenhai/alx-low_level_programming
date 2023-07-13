#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char h);
void *malloc_checked(unsigned int hh);
char *string_nconcat(char *h1, char *h2, unsigned int y);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void errors(void);
int _strlen(char *sl);
int digit(char *si);

#endif

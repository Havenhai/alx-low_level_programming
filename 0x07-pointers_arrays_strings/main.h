#ifndef MAIN_H
#define MAIN_H

char *_memset(char *h, char t, unsigned int y);
int _putchar(char h);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *h, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*h)[8]);
void print_diagsums(int *h, int size);
void set_string(char **h, char *to);
#endif

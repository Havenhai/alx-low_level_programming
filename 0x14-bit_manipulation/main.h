#ifndef MAIN_H
#define MAIN_H

int get_endianness(void);
unsigned int binary_to_uint(const char *hav);
unsigned int flip_bits(unsigned long int hav, unsigned long int have);
void print_binary(unsigned long int hav);
int get_bit(unsigned long int hav, unsigned int index);
int clear_bit(unsigned long int *hav, unsigned int index);
int set_bit(unsigned long int *hav, unsigned int index);
int _atoi(const char *s);
int _putchar(char c);

#endif

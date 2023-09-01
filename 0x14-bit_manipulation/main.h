#ifndef MAIN_H
#define MAIN_H

int Get_bit(unsigned long int num_sys_base, unsigned int index_bit);
int set_bit(unsigned long int *numeral_sys, unsigned int index_havubit);
int get_endianness(void);
int clear_bit(unsigned long int *num_havu_base, unsigned int bit_havu_idx);
void Print_binary(unsigned long int n_deci);
unsigned int flip_bits(unsigned long int num_ha, unsigned long int num_hb);
int _atoi(const char *s);
int _putchar(char character);
unsigned int binary_strg_to_uint(const char *bina);

#endif

#include "main.h"

/**
 * flip_bits - Calculates the count of differing bits between two numbers.
 *
 * This function takes two unsigned long integers
 * 'initial_number' (num_ha) and
 * 'final_number' (num_hb) as parameters,
 * representing two numbers. It calculates
 * the number of bits that need to be changed
 * in 'initial_number' to obtain
 * 'final_number', and returns the count of
 * differing bits. The function uses
 * bitwise XOR (^) to find the differing bits
 * and then counts them using a loop.
 *
 * @ini_num: The first number.
 * @fin_num: The second number.
 *
 * Return: Number of differing bits between numbers.
 */
unsigned int flip_bits(unsigned long int ini_num, unsigned long int fin_num)
{
int bit_position;
unsigned int differing_bit_count = 0;
unsigned long int current_bit;
unsigned long int differing_bits = ini_num ^ fin_num;

for (bit_position = 63; bit_position >= 0; bit_position--)
{
current_bit = differing_bits >> bit_position;
if (current_bit & 1)
differing_bit_count++;
}

return (differing_bit_count);
}

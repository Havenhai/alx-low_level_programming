#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int num_sys_base;

    num_sys_base = Get_bit(1024, 10);
    printf("%d\n", num_sys_base);
    num_sys_base = Get_bit(98, 1);
    printf("%d\n", num_sys_base);
    num_sys_base = Get_bit(1024, 0);
    printf("%d\n", num_sys_base);
    return (0);
}

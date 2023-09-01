#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    Print_binary(0);
    printf("\n");
    Print_binary(1);
    printf("\n");
    Print_binary(98);
    printf("\n");
    Print_binary(1024);
    printf("\n");
    Print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}

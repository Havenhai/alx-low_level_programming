#include<stdio.h>
/**
 * main - Entry point
 *
 * Return:0
 */
int main(void)
{
	int a = sizeof(char);
	int b = sizeof(int);
	int c = sizeof(long int);
	int d = sizeof(long long int);
	int f = sizeof(float);
	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of a int: %d byte(s)\n", b);
	printf("Size of a long int: %d byte(s)\n", c);
	printf("Size of a long long int: %d byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", f);
	return (0);
}

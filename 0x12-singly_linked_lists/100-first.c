#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - function  prints a sentence before the main
 * function is executed
 * will automatically executed before main function
 * or when the program starts
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");/*printed first*/
	printf("I bore my house upon my back!\n");/*printed second*/
}

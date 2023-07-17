#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @hh: struct dog to print
 * If an element of d is NULL, print (nil) instead of this element.
 * if name is NULL, print Name: (nil)
 * If hh is NULL print nothing
 */

void print_dog(struct dog *hh)
{
	if (hh == NULL)
		return;

	if (hh->name == NULL)
		printf("name: (nil)\n");
	else
		printf("name: %s\n", hh->name);
	if (hh->age < 0)
		printf("age: (nil)\n");
	else
		printf("age: %f\n", hh->age);
	if (hh->owner == NULL)
		printf("owner: (nil)\n");
	else
		printf("owner: %s\n", hh->owner);
}

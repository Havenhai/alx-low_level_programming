#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @hh: pointer to struct dog to initialize
 * @name: name of dog to be initialize
 * @age: age of dog to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *hh, char *name, float age, char *owner)
{
	if (hh == NULL)
		hh = malloc(sizeof(struct dog));
	hh->name = name;
	hh->age = age;
	hh->owner = owner;
}

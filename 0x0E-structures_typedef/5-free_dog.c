#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a struct dog
 * @hh: struct dog to free
 */

void free_dog(dog_t *hh)
{
	if (hh)
	{
		free(hh->name);
		free(hh->owner);
		free(hh);
	}
}

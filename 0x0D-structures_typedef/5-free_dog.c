#include "dog.h"
#include <stdlib.h>

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d.name != NULL)
		free(d.name);
	if (d.age != NULL)
		free(d.age);
	if (d.owner != NULL)
		free(d.owner);
}

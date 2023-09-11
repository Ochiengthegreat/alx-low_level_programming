#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - The new dog struct variable
 * @d - pointer to the new struct
 * @name - name of the new dog 
 * @age - age of the new dog
 * @owner - owner of the new dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

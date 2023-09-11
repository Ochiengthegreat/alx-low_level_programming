#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct for dog d
 *
 * @d: the new dog of the struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		if (!((*d).name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).owner);
	}
}

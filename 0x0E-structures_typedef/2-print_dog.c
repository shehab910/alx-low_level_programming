#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * format example:
 * Name: Poppy
 * Age: 3.500000
 * Owner: Bob
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}

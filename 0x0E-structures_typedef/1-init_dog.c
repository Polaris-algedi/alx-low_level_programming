#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure with given values
 *
 * @d: Pointer to the dog structure to be initialized
 * @name: Pointer to the string representing the dog's name
 * @age: The dog's age
 * @owner: Pointer to the string representing the dog's owner's name
 *
 * This function initializes the members of a dog structure with the given
 * values for name, age, and owner. The function takes a pointer to the
 * structure as its first parameter and modifies it to set its member values.
 * The name and owner parameters are pointers to strings that represent the
 * dog's name and owner's name, respectively. The age parameter is a float
 * that represents the dog's age in years.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#ifndef _DOG_
#define _DOG_



/**
 * struct dog - A struct that represents a dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of the dog's owner.
 *
 * Description: This struct contains information about a dog, including its
 * name, age, and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

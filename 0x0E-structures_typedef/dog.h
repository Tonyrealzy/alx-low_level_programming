#ifndef DOG_H
#define DOG_H

/**
 * struct_dog - creates a file named dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};
typedef struct dog my_dog;

#endif

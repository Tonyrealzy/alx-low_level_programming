#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog_t
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *puppy;
	int i, j, k;
	char *w, *x;

	puppy = malloc(sizeof(struct dog));
	if (puppy == NULL)
		return (NULL);
	i = 0;
	while (name[i] != '\0')
		i++;
	j = 0;
	while (owner[j] != '\0')
		j++;

	w = malloc(sizeof(char) * (i + 1));
	if (w == NULL)
	{
		free(puppy);
		return (NULL);
	}
	x = malloc(sizeof(char) * (j + 1));
	if (x == NULL)
	{
		free(w);
		free(puppy);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		w[k] = name[k];
	for (k = 0; k <= j; k++)
		x[k] = owner[k];

	puppy->name = w;
	puppy->age = age;
	puppy->owner = x;

	return (puppy);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDog;

	NewDog = malloc(sizeof(dog_t));
	if (NewDog == NULL)
		return (NULL);
	NewDog->name = strdup(name);
	NewDog->owner = strdup(owner);
	NewDog->age = age;
	return (NewDog);
}

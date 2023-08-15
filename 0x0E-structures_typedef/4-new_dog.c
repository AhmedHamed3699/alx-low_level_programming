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
	NewDog->name = malloc(sizeof(*name) * (strlen(name) + 1));
	if (NewDog->name == NULL)
	{
		free(NewDog);
		return (NULL);
	}
	NewDog->owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	if (NewDog->owner == NULL)
	{
		free(NewDog->name);
		free(NewDog);
		return (NULL);
	}
	NewDog->age = age;
	return (NewDog);
}

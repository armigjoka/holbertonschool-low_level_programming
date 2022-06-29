#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new struct for dog
 * @name: name of thr dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: your_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *your_dog;
	int i, lname = 0, lowner = 0;

	for (i = 0; name[i] != '\0'; i++)
		lname++;
	for (i = 0; owner[i] != '\0'; i++)
		lowner++;
	your_dog = malloc(sizeof(dog_t));
	if (your_dog == NULL)
		return (NULL);
	your_dog->name = malloc(sizeof(char) * (lname + 1));
	if (your_dog->name == NULL)
	{
	free(your_dog);
	return (NULL);
	}
	your_dog->owner = malloc(sizeof(char) * (lowner + 1));
	if (your_dog->owner == NULL)
	{
	free(your_dog->name);
	free(your_dog);
	return (NULL);
	}
	your_dog->age = age;
	for (i = 0; name[i] != '\0'; i++)
		your_dog->name[i] = name[i];
	your_dog->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		your_dog->owner[i] = owner[i];
	your_dog->owner[i] = '\0';
	return (your_dog);
}


#include "dog.h"
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: it return a pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newdog_name, *newdog_owner;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog_name = _strdup(name);
	if (newdog_name == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog_owner = _strdup(owner);
	if (newdog_owner == NULL)
	{
		free(newdog_name);
		free(newdog);
		return (NULL);
	}
	newdog->name = newdog_name;
	newdog->age = age;
	newdog->owner = newdog_owner;
	return (newdog);
}

/**
 * _strdup - Duplicates a string
 * @str: Initial string
 * Return: The new string
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *string2;

	if (str == NULL)
	{
		return (NULL);
	}
	string2 = malloc(sizeof(char) * strlen(str) + 1);
	if (string2 == NULL)
		return (NULL);

	for (i = 0; i <= strlen(str); i++)
		string2[i] = str[i];
	return (string2);
}

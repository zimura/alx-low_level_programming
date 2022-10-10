#include "dog.h"
#include <stdlib.h>
#include <string.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - finds the length of a string.
* @str: the string to be measured.
*
* Return: the length of the string.
*/
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
* _strcopy - copies a string pointed to src
* @dest: the buffer that stores the copied string
* @src: the source string
*
* Return: the pointer to dest
*/
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
* new_dog - creates a new dog.
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: the new struct dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
		return (NULL);

	doggie->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}

	doggie->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcopy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcopy(doggie->owner, owner);

	return (doggie);
}




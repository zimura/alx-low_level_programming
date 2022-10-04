#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* _strlen - count array
* @s: array of elemments
* Return: 1
*/
int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
* *_strcpy - copy array
* @src: array of elements
* @dest: destination of array
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
* *_strdup - rns a pointer to a newly allocated space in memory
* @str: memory of the new string
* Return: string
*/
char *_strdup(char *str)
{
	char *dsti;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;

	dsti = (char *) malloc(size * sizeof(char));

	if (dsti == 0)
	{
		return (NULL);
	}
	_strcpy(dsti, str);
	return (dsti);
}

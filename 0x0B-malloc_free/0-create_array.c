#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - creates an array of chars,
*i and initializes it with a specific char.
* @size: number of element array
* @c: char
* Return: NULL
*/
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0i)
	{
		return (NULL);
	}

	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
	while (position < size)
	{
		*(buffer + position) = c;
		position++;
	}
	return (buffer);
	}
}

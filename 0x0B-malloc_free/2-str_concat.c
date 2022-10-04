#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strlen - count array
* @s: array of element
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
* *str_concat - concatenates two strings.
* @s1: param 1
* @s2: param 2
* Return: concat strings
*/
char *str_concat(char *s1, char *s2)
{
	char *dsti;
	unsigned int i, j, size;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	size = (_strlen(s1) + _strlen(s2) + 1);

	dsti = (char *) malloc(size * sizeof(char));

	if (dsti == 0)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0'; i++)
	*(dsti + i) = *(s1 + i);
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dsti + i) = *(s2 + j);
		i++;
	}
	return (dsti);
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* _strlen - checkes the length of a code
* @s:the pointer to pass the function
* Return: length of a string
*/

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (strlen(s));
}

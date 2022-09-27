#include "main.h"
#include <string.h>

/**
* _memset -  fills memory with a constant byte
* @s: string
* @b: a character
* @n: an integer
* Return: a string
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

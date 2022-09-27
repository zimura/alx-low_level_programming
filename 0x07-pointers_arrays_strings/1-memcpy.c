#include "main.h"
#include <string.h>

/**
* memcpy -  copies memory area.
* @dest: is final destination
* @src: is source memory
* @n: number of bytes to be copied
* Return: A string
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

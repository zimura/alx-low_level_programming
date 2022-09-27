#include "main.h"
#include <string.h>

/**
* _strspn - that gets the length of a prefix substring.
* @s: source string
* @accept: accepted string
*
* Return: number of bytes in the segment
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;
	while (s[b] != 32)
	{
	if (accept[a] == s[b])
	{
		t++;
	}
	b++;
	}
	a++;
	}
	return (t);
}

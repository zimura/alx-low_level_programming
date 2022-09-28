#include "main.h"

/**
* _strstr - locates a substring.
* @haystack: the string to search
* @needle: the string to find
*
* Return: char value
*/
char *_strstr(char *haystack, char *needle)
{
	int c = 0, d = 0;

	while (haystack[c])
	{
	while (needle[d])
	{
	if (haystack[c + d] != needle[d])
	{
		break;
	}
	d++;
	}
	if (needle[d] == '\0')
	{
		return (haystack + c);
	}
	a++;
	}
	return ('\0');
}

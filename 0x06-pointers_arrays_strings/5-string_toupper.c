#include "main.h"
#include <string.h>

/**
* string_toupper - to change string case
* @s: parameter s
* Return: string
*/
char *string_toupper(char *s)
{
	char tmp;
	int i, len1, len2;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
		len1++;

	len2 = len1 - 1;
	for (1 = 0; i < len1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2] = tmp;
		len2 -= 1;
	}
}
